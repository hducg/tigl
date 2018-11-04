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

#include <string>
#include <tixi.h>
#include <vector>
#include "tigl_internal.h"
#include "UniquePtr.h"

namespace tigl
{
namespace generated
{
    class CPACSUpdate;

    // This class is used in:
    // CPACSHeader

    // generated from /xsd:schema/xsd:complexType[892]
    /// <summary>
    /// <para>
    /// updatesType</para>
    /// </summary>
    /// <remarks>
    /// <para>
    /// Updates type, containing update data for the CPACS
    /// dataset</para>
    /// </remarks>
    class CPACSUpdates
    {
    public:
        TIGL_EXPORT CPACSUpdates();
        TIGL_EXPORT virtual ~CPACSUpdates();

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const std::vector<unique_ptr<CPACSUpdate> >& GetUpdates() const;
        TIGL_EXPORT virtual std::vector<unique_ptr<CPACSUpdate> >& GetUpdates();

        TIGL_EXPORT virtual CPACSUpdate& AddUpdate();
        TIGL_EXPORT virtual void RemoveUpdate(CPACSUpdate& ref);

    protected:
        std::vector<unique_ptr<CPACSUpdate> > m_updates;

    private:
#ifdef HAVE_CPP11
        CPACSUpdates(const CPACSUpdates&) = delete;
        CPACSUpdates& operator=(const CPACSUpdates&) = delete;

        CPACSUpdates(CPACSUpdates&&) = delete;
        CPACSUpdates& operator=(CPACSUpdates&&) = delete;
#else
        CPACSUpdates(const CPACSUpdates&);
        CPACSUpdates& operator=(const CPACSUpdates&);
#endif
    };
} // namespace generated

// Aliases in tigl namespace
#ifdef HAVE_CPP11
using CCPACSUpdates = generated::CPACSUpdates;
using CCPACSUpdate = generated::CPACSUpdate;
#else
typedef generated::CPACSUpdates CCPACSUpdates;
typedef generated::CPACSUpdate CCPACSUpdate;
#endif
} // namespace tigl
