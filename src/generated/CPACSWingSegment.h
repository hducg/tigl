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
#include <CCPACSGuideCurves.h>
#include <string>
#include <tixi.h>
#include "CreateIfNotExists.h"
#include "tigl_internal.h"

namespace tigl
{
class CTiglUIDManager;
class CCPACSWingSegments;

namespace generated
{
    // This class is used in:
    // CPACSWingSegments

    // generated from /xsd:schema/xsd:complexType[954]
    /// <summary>
    /// <para>
    /// Segment of the wing.</para>
    /// </summary>
    /// <remarks>
    /// <content>
    /// <para>
    /// A segment defines which two wing elements (=cross
    /// sections) are linked to one wing segment.</para>
    /// <para>
    /// An example for wing segments can be found in the
    /// picture below:</para>
    /// <mediaLink>
    /// <image href="wingsegments">
    /// </image>
    /// </mediaLink>
    /// </content>
    /// </remarks>
    class CPACSWingSegment
    {
    public:
        TIGL_EXPORT CPACSWingSegment(CCPACSWingSegments* parent, CTiglUIDManager* uidMgr);

        TIGL_EXPORT virtual ~CPACSWingSegment();

        TIGL_EXPORT CCPACSWingSegments* GetParent();

        TIGL_EXPORT const CCPACSWingSegments* GetParent() const;

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

        TIGL_EXPORT virtual const std::string& GetFromElementUID() const;
        TIGL_EXPORT virtual void SetFromElementUID(const std::string& value);

        TIGL_EXPORT virtual const std::string& GetToElementUID() const;
        TIGL_EXPORT virtual void SetToElementUID(const std::string& value);

        TIGL_EXPORT virtual const boost::optional<CCPACSGuideCurves>& GetGuideCurves() const;
        TIGL_EXPORT virtual boost::optional<CCPACSGuideCurves>& GetGuideCurves();

        TIGL_EXPORT virtual CCPACSGuideCurves& GetGuideCurves(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveGuideCurves();

    protected:
        CCPACSWingSegments* m_parent;

        CTiglUIDManager* m_uidMgr;

        std::string                        m_uID;

        /// Name of wing the wing segment.
        std::string                        m_name;

        /// Description of the wing segment.
        boost::optional<std::string>       m_description;

        /// Reference to the element from which the
        /// segment shall start.
        std::string                        m_fromElementUID;

        /// Reference to the element at which the segment
        /// shall end.
        std::string                        m_toElementUID;

        /// Optional and additional guidecurves to shape
        /// the outer geometry.
        boost::optional<CCPACSGuideCurves> m_guideCurves;

    private:
#ifdef HAVE_CPP11
        CPACSWingSegment(const CPACSWingSegment&) = delete;
        CPACSWingSegment& operator=(const CPACSWingSegment&) = delete;

        CPACSWingSegment(CPACSWingSegment&&) = delete;
        CPACSWingSegment& operator=(CPACSWingSegment&&) = delete;
#else
        CPACSWingSegment(const CPACSWingSegment&);
        CPACSWingSegment& operator=(const CPACSWingSegment&);
#endif
    };
} // namespace generated

// CPACSWingSegment is customized, use type CCPACSWingSegment directly
} // namespace tigl
