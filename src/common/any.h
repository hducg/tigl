/* 
* Copyright (C) 2018 German Aerospace Center (DLR/SC)
*
* Created: 2018-04-03 Martin Siggel <Martin.Siggel@dlr.de>
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/


#ifndef any_H
#define any_H

#include "tigl_internal.h"
#include "CTiglError.h"
#include <boost/lexical_cast.hpp>

namespace tigl
{

/**
 * @brief A class that can hold any other object. Similar to boost::any
 * but includes also a from_string method
 */
class any
{
public:
    /// Creates an empty element
    any()
        : pimpl(NULL)
    {
    }

    /// Creates an element holding the value t
    template <class T>
    any(const T& t)
        : pimpl(new any_conceptImpl<T>(t))
    {
    }

    any(const any& other)
        : pimpl(other.pimpl->clone())
    {
    }
    
    any& operator = (const any& other)
    {
        any tmp(other);

        // move from tmp
        this->pimpl = tmp.pimpl;
        tmp.pimpl = NULL;
        return *this;
    }

    /// Tests, whether the element is empty or not
    bool empty() const
    {
        return pimpl == NULL;
    }

    const std::type_info& type() const
    {
        if (empty()) {
            return typeid(NULL);
        }
        else {
            return pimpl->type();
        }
    }

    template <class to_value>
    to_value const * to_ptr() const
    {
        if (typeid(to_value) != type()) {
            return NULL;
        }
        else {
            return &(static_cast<any_conceptImpl<to_value> *>(pimpl)->value);
        }
    }

    any& from_string(const std::string& s)
    {
        if (!empty()) {
            pimpl->from_string(s);
            return *this;
        }
        else {
            throw CTiglError("Empty any element");
        }
    }

    ~any()
    {
        if (!pimpl) {
            delete pimpl;
        }
    }
    
private:
    class any_concept
    {
    public:
        virtual any_concept* clone() const  = 0;
        virtual const std::type_info& type() const = 0;
        virtual void from_string(const std::string& s) = 0;
    };
    
    template <class T>
    class any_conceptImpl : public any_concept
    {
    public:
        any_conceptImpl(const T& t)
            : value(t)
        {
        }

        any_concept* clone() const OVERRIDE
        {
            return new any_conceptImpl(value);
        }

        const std::type_info& type() const OVERRIDE
        {
            return typeid(value);
        }
        
        void from_string(const std::string& s) OVERRIDE
        {
            tigl::from_string(s, value);
        }

        T value;
    };
private:
    any_concept* pimpl;
};

template <class T>
T any_cast(const any& any)
{
    T const * ptr = any.to_ptr<T>();
    if (ptr) {
        return *ptr;
    }
    else {
        throw tigl::CTiglError("Cannot convert");
    }
}

template <class to_value>
void from_string(const std::string& s, to_value& t)
{
    try {
        t = boost::lexical_cast<to_value>(s);
    }
    catch (boost::bad_lexical_cast&) {
        throw tigl::CTiglError("Cannot convert string to " +
                               boost::core::demangled_name(typeid(to_value)));
    }
}

}

#endif // any_H
