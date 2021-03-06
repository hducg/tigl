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
#include "CPACSControlSurfaceTrackType_trackSubType.h"
#include "CPACSControlSurfaceTrackType_trackType.h"
#include "CPACSEtaIsoLine.h"
#include "CPACSTrackActuator.h"
#include "CPACSTrackStructure.h"
#include "CreateIfNotExists.h"
#include "tigl_internal.h"

namespace tigl
{
class CTiglUIDManager;

namespace generated
{
    class CPACSControlSurfaceTracks;

    // This class is used in:
    // CPACSControlSurfaceTracks

    // generated from /xsd:schema/xsd:complexType[189]
    class CPACSControlSurfaceTrackType
    {
    public:
        TIGL_EXPORT CPACSControlSurfaceTrackType(CPACSControlSurfaceTracks* parent, CTiglUIDManager* uidMgr);

        TIGL_EXPORT virtual ~CPACSControlSurfaceTrackType();

        TIGL_EXPORT CPACSControlSurfaceTracks* GetParent();

        TIGL_EXPORT const CPACSControlSurfaceTracks* GetParent() const;

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const std::string& GetUID() const;
        TIGL_EXPORT virtual void SetUID(const std::string& value);

        TIGL_EXPORT virtual const CPACSEtaIsoLine& GetEta() const;
        TIGL_EXPORT virtual CPACSEtaIsoLine& GetEta();

        TIGL_EXPORT virtual const CPACSControlSurfaceTrackType_trackType& GetTrackType() const;
        TIGL_EXPORT virtual void SetTrackType(const CPACSControlSurfaceTrackType_trackType& value);

        TIGL_EXPORT virtual const boost::optional<CPACSControlSurfaceTrackType_trackSubType>& GetTrackSubType() const;
        TIGL_EXPORT virtual void SetTrackSubType(const boost::optional<CPACSControlSurfaceTrackType_trackSubType>& value);

        TIGL_EXPORT virtual const boost::optional<CPACSTrackActuator>& GetActuator() const;
        TIGL_EXPORT virtual boost::optional<CPACSTrackActuator>& GetActuator();

        TIGL_EXPORT virtual const boost::optional<CPACSTrackStructure>& GetTrackStructure() const;
        TIGL_EXPORT virtual boost::optional<CPACSTrackStructure>& GetTrackStructure();

        TIGL_EXPORT virtual CPACSTrackActuator& GetActuator(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveActuator();

        TIGL_EXPORT virtual CPACSTrackStructure& GetTrackStructure(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveTrackStructure();

    protected:
        CPACSControlSurfaceTracks* m_parent;

        CTiglUIDManager* m_uidMgr;

        std::string                                                m_uID;
        CPACSEtaIsoLine                                            m_eta;
        CPACSControlSurfaceTrackType_trackType                     m_trackType;
        boost::optional<CPACSControlSurfaceTrackType_trackSubType> m_trackSubType;
        boost::optional<CPACSTrackActuator>                        m_actuator;
        boost::optional<CPACSTrackStructure>                       m_trackStructure;

    private:
#ifdef HAVE_CPP11
        CPACSControlSurfaceTrackType(const CPACSControlSurfaceTrackType&) = delete;
        CPACSControlSurfaceTrackType& operator=(const CPACSControlSurfaceTrackType&) = delete;

        CPACSControlSurfaceTrackType(CPACSControlSurfaceTrackType&&) = delete;
        CPACSControlSurfaceTrackType& operator=(CPACSControlSurfaceTrackType&&) = delete;
#else
        CPACSControlSurfaceTrackType(const CPACSControlSurfaceTrackType&);
        CPACSControlSurfaceTrackType& operator=(const CPACSControlSurfaceTrackType&);
#endif
    };
} // namespace generated

// CPACSControlSurfaceTrackType is customized, use type CCPACSControlSurfaceTrackType directly

// Aliases in tigl namespace
#ifdef HAVE_CPP11
using CCPACSControlSurfaceTracks = generated::CPACSControlSurfaceTracks;
#else
typedef generated::CPACSControlSurfaceTracks CCPACSControlSurfaceTracks;
#endif
} // namespace tigl
