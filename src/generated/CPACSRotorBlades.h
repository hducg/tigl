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
class CTiglUIDManager;
class CCPACSWing;
class CCPACSRotorcraftModel;

namespace generated
{
    // This class is used in:
    // CPACSRotorcraftModel

    // generated from /xsd:schema/xsd:complexType[767]
    /// <summary>
    /// <para>
    /// rotorBladesType</para>
    /// </summary>
    /// <remarks>
    /// <content>
    /// <para>
    /// RotorBlades type, containing all the rotor blade
    /// gometry definitions of an rotorcraft model.</para>
    /// <para>
    /// Rotor blade geometries are defined using the same data
    /// structure as wings (wingType). But in order to be compatible
    /// with the other rotor blade related types (e.g. rotorType,
    /// rotorHubType, rotorHubHingeType) there are some additional
    /// conventions/requirements regarding the definition and
    /// orientation of rotorBlade geometries:</para>
    /// <list class="bullet">
    /// <listItem>
    /// Rotor blades should be positioned relative to the
    /// global z-axis the way they will be positioned to the rotor
    /// shaft (when blade azimuth=0deg).</listItem>
    /// <listItem>
    /// The global x-axis should be used as radial axis
    /// (usually the quarter chord line of the rotor blade coincides to
    /// a great extent with the x-axis of the rotor blade coordinate
    /// system).</listItem>
    /// <listItem>
    /// All sections should be positioned in the positive
    /// x halfspace.</listItem>
    /// <listItem>
    /// Segments should connect sections with ascending x
    /// coordinates.</listItem>
    /// <listItem>
    /// Airfoils defined in the rotorAirfoils node should
    /// be used instead airfoils from the wingAirfoils node.</listItem>
    /// </list>
    /// <mediaLink>
    /// <image href="rotorBlade_cs01">
    /// </image>
    /// </mediaLink>
    /// </content>
    /// </remarks>
    class CPACSRotorBlades
    {
    public:
        TIGL_EXPORT CPACSRotorBlades(CCPACSRotorcraftModel* parent, CTiglUIDManager* uidMgr);

        TIGL_EXPORT virtual ~CPACSRotorBlades();

        TIGL_EXPORT CCPACSRotorcraftModel* GetParent();

        TIGL_EXPORT const CCPACSRotorcraftModel* GetParent() const;

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const std::vector<unique_ptr<CCPACSWing> >& GetRotorBlades() const;
        TIGL_EXPORT virtual std::vector<unique_ptr<CCPACSWing> >& GetRotorBlades();

        TIGL_EXPORT virtual CCPACSWing& AddRotorBlade();
        TIGL_EXPORT virtual void RemoveRotorBlade(CCPACSWing& ref);

    protected:
        CCPACSRotorcraftModel* m_parent;

        CTiglUIDManager* m_uidMgr;

        /// Rotor blade geometries are defined using the
        /// same data structure as wings (wingType). But in order to be
        /// compatible with the other rotor blade related types (e.g.
        /// rotorType, rotorHubType, rotorHubHingeType) there are some
        /// additional conventions/requirements regarding the definition and
        /// orientation of rotorBlade geometries: see remarks.
        std::vector<unique_ptr<CCPACSWing> > m_rotorBlades;

    private:
#ifdef HAVE_CPP11
        CPACSRotorBlades(const CPACSRotorBlades&) = delete;
        CPACSRotorBlades& operator=(const CPACSRotorBlades&) = delete;

        CPACSRotorBlades(CPACSRotorBlades&&) = delete;
        CPACSRotorBlades& operator=(CPACSRotorBlades&&) = delete;
#else
        CPACSRotorBlades(const CPACSRotorBlades&);
        CPACSRotorBlades& operator=(const CPACSRotorBlades&);
#endif
    };
} // namespace generated

// CPACSRotorBlades is customized, use type CCPACSRotorBlades directly
} // namespace tigl
