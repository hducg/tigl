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

    // generated from /xsd:schema/xsd:complexType[869]
    /// <summary>
    /// <para>
    /// trackCarType</para>
    /// </summary>
    /// <remarks>
    /// <para>
    /// </para>
    /// </remarks>
    class CPACSTrackCar
    {
    public:
        TIGL_EXPORT CPACSTrackCar();
        TIGL_EXPORT virtual ~CPACSTrackCar();

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const CCPACSMaterialDefinition& GetMaterial() const;
        TIGL_EXPORT virtual CCPACSMaterialDefinition& GetMaterial();

    protected:
        /// Definition of the material properties.
        CCPACSMaterialDefinition m_material;

    private:
#ifdef HAVE_CPP11
        CPACSTrackCar(const CPACSTrackCar&) = delete;
        CPACSTrackCar& operator=(const CPACSTrackCar&) = delete;

        CPACSTrackCar(CPACSTrackCar&&) = delete;
        CPACSTrackCar& operator=(CPACSTrackCar&&) = delete;
#else
        CPACSTrackCar(const CPACSTrackCar&);
        CPACSTrackCar& operator=(const CPACSTrackCar&);
#endif
    };
} // namespace generated

// Aliases in tigl namespace
#ifdef HAVE_CPP11
using CCPACSTrackCar = generated::CPACSTrackCar;
#else
typedef generated::CPACSTrackCar CCPACSTrackCar;
#endif
} // namespace tigl
