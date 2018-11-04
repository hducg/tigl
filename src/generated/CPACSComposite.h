// Copyright (c) 2018 RISC Software GmbH
//
// This file was generated by CPACSGen from CPACS XML Schema (c) German Aerospace Center (DLR/SC).
// Do not edit, all changes are lost when files are re-generated.
//
// Licensed under the Apache License, Version 2.0 (the "License")
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <boost/optional.hpp>
#include <boost/utility/in_place_factory.hpp>
#include <string>
#include <tixi.h>
#include <vector>
#include "tigl_internal.h"
#include "UniquePtr.h"

namespace tigl
{
class CTiglUIDManager;

namespace generated
{
    class CPACSCompositeLayer;

    // This class is used in:
    // CPACSComposites

    // generated from /xsd:schema/xsd:complexType[145]
    /// <summary>
    /// <para>
    /// compositeType</para>
    /// </summary>
    /// <remarks>
    /// <para>
    /// Composite type, conatining data of a composite</para>
    /// </remarks>
    class CPACSComposite
    {
    public:
        TIGL_EXPORT CPACSComposite(CTiglUIDManager* uidMgr);
        TIGL_EXPORT virtual ~CPACSComposite();

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const std::string& GetUID() const;
        TIGL_EXPORT virtual void SetUID(const std::string& value);

        TIGL_EXPORT virtual const std::string& GetName() const;
        TIGL_EXPORT virtual void SetName(const std::string& value);

        TIGL_EXPORT virtual const boost::optional<std::string>& GetDescription() const;
        TIGL_EXPORT virtual void SetDescription(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetOffset() const;
        TIGL_EXPORT virtual void SetOffset(const boost::optional<double>& value);

        TIGL_EXPORT virtual const std::vector<unique_ptr<CPACSCompositeLayer> >& GetCompositeLayers() const;
        TIGL_EXPORT virtual std::vector<unique_ptr<CPACSCompositeLayer> >& GetCompositeLayers();

        TIGL_EXPORT virtual CPACSCompositeLayer& AddCompositeLayer();
        TIGL_EXPORT virtual void RemoveCompositeLayer(CPACSCompositeLayer& ref);

    protected:
        CTiglUIDManager* m_uidMgr;

        std::string                                   m_uID;

        /// Name of composite
        std::string                                   m_name;

        /// Description of composite
        boost::optional<std::string>                  m_description;

        /// offset of the laminate. The reference plane of
        /// the laminate is the arithmetic mean of the laminate thickness.
        boost::optional<double>                       m_offset;

        std::vector<unique_ptr<CPACSCompositeLayer> > m_compositeLayers;

    private:
#ifdef HAVE_CPP11
        CPACSComposite(const CPACSComposite&) = delete;
        CPACSComposite& operator=(const CPACSComposite&) = delete;

        CPACSComposite(CPACSComposite&&) = delete;
        CPACSComposite& operator=(CPACSComposite&&) = delete;
#else
        CPACSComposite(const CPACSComposite&);
        CPACSComposite& operator=(const CPACSComposite&);
#endif
    };
} // namespace generated

// Aliases in tigl namespace
#ifdef HAVE_CPP11
using CCPACSComposite = generated::CPACSComposite;
using CCPACSCompositeLayer = generated::CPACSCompositeLayer;
#else
typedef generated::CPACSComposite CCPACSComposite;
typedef generated::CPACSCompositeLayer CCPACSCompositeLayer;
#endif
} // namespace tigl
