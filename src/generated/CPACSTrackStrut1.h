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

#include <CCPACSMaterialDefinition.h>
#include <string>
#include <tixi.h>
#include "tigl_internal.h"

namespace tigl
{
namespace generated
{
    // This class is used in:
    // CPACSTrackStructure

    // generated from /xsd:schema/xsd:complexType[872]
    class CPACSTrackStrut1
    {
    public:
        TIGL_EXPORT CPACSTrackStrut1();
        TIGL_EXPORT virtual ~CPACSTrackStrut1();

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const CCPACSMaterialDefinition& GetMaterial() const;
        TIGL_EXPORT virtual CCPACSMaterialDefinition& GetMaterial();

    protected:
        CCPACSMaterialDefinition m_material;

    private:
#ifdef HAVE_CPP11
        CPACSTrackStrut1(const CPACSTrackStrut1&) = delete;
        CPACSTrackStrut1& operator=(const CPACSTrackStrut1&) = delete;

        CPACSTrackStrut1(CPACSTrackStrut1&&) = delete;
        CPACSTrackStrut1& operator=(CPACSTrackStrut1&&) = delete;
#else
        CPACSTrackStrut1(const CPACSTrackStrut1&);
        CPACSTrackStrut1& operator=(const CPACSTrackStrut1&);
#endif
    };
} // namespace generated

// Aliases in tigl namespace
#ifdef HAVE_CPP11
using CCPACSTrackStrut1 = generated::CPACSTrackStrut1;
#else
typedef generated::CPACSTrackStrut1 CCPACSTrackStrut1;
#endif
} // namespace tigl
