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
#include <CCPACSPoint.h>
#include <string>
#include <tixi.h>
#include "CPACSPointXZ.h"
#include "CreateIfNotExists.h"
#include "tigl_internal.h"

namespace tigl
{
class CTiglUIDManager;
class CCPACSControlSurfaceSteps;

namespace generated
{
    // This class is used in:
    // CPACSControlSurfaceSteps

    // generated from /xsd:schema/xsd:complexType[187]
    /// <summary>
    /// <para>
    /// controlSurfaceStepType</para>
    /// </summary>
    /// <remarks>
    /// <content>
    /// <para>
    /// The deflection path of the control surface is defined
    /// within the hinge line coordinat system. This is defined as
    /// follows: The x-hinge coordinate equals the wing x-axis. The
    /// y-hinge coordinate equals the hinge line axis (see above;
    /// positive from inner to outer hinge point). The z-hinge line is
    /// perpendicular on the x-hinge and y-hinge coordinate according to
    /// the right hand rule. The rotation of the control surface is
    /// defined as rotation around the positive y-hinge line.</para>
    /// <para>
    /// The deflection of the is defined in any number of
    /// steps. The deflection of the control surface is done as follows:
    /// First the x-deflection at the inner and outer border; afterwards
    /// the z-deflection of the inner and outer border; last the
    /// y-deflection of the inner border. The y-deflection is only
    /// defined at the inner border, as it is identical to the outer
    /// border. If no values for the outer border deflection are given,
    /// they default to the values of the inner border.</para>
    /// <para>
    /// An example can be found below:</para>
    /// <mediaLink>
    /// <image href="path">
    /// </image>
    /// </mediaLink>
    /// </content>
    /// </remarks>
    class CPACSControlSurfaceStep
    {
    public:
        TIGL_EXPORT CPACSControlSurfaceStep(CCPACSControlSurfaceSteps* parent, CTiglUIDManager* uidMgr);

        TIGL_EXPORT virtual ~CPACSControlSurfaceStep();

        TIGL_EXPORT CCPACSControlSurfaceSteps* GetParent();

        TIGL_EXPORT const CCPACSControlSurfaceSteps* GetParent() const;

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const double& GetRelDeflection() const;
        TIGL_EXPORT virtual void SetRelDeflection(const double& value);

        TIGL_EXPORT virtual const boost::optional<CCPACSPoint>& GetInnerHingeTranslation() const;
        TIGL_EXPORT virtual boost::optional<CCPACSPoint>& GetInnerHingeTranslation();

        TIGL_EXPORT virtual const boost::optional<CPACSPointXZ>& GetOuterHingeTranslation() const;
        TIGL_EXPORT virtual boost::optional<CPACSPointXZ>& GetOuterHingeTranslation();

        TIGL_EXPORT virtual const boost::optional<double>& GetHingeLineRotation() const;
        TIGL_EXPORT virtual void SetHingeLineRotation(const boost::optional<double>& value);

        TIGL_EXPORT virtual CCPACSPoint& GetInnerHingeTranslation(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveInnerHingeTranslation();

        TIGL_EXPORT virtual CPACSPointXZ& GetOuterHingeTranslation(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveOuterHingeTranslation();

    protected:
        CCPACSControlSurfaceSteps* m_parent;

        CTiglUIDManager* m_uidMgr;

        /// Relative deflection. This value is an double
        /// value and must be unique with all steps. Can be seen as a kind
        /// of 'uID' of the step. The value can have any range and is not
        /// limited from 0 to 1. 0 means no deflection. The values of
        /// relDeflection define the order of the different steps (0 to the
        /// highest relDeflection for the positive deflection; 0 to the
        /// lowest (negative) value for the negative deflection (if any).
        double                        m_relDeflection;

        /// Translation of the inner hinge line point
        /// within the hinge line coordinate system. Defaults to zero. Not
        /// allowed for spoilers!
        boost::optional<CCPACSPoint>  m_innerHingeTranslation;

        /// Translation of the outer hinge line point
        /// within the hinge line coordinate system. Defaults to the values
        /// of the inner hinge line point. Not allowed for spoilers!
        boost::optional<CPACSPointXZ> m_outerHingeTranslation;

        /// Positve rotation around the hinge line,
        /// heading from the inner to the outer border. Defaults to zero.
        boost::optional<double>       m_hingeLineRotation;

    private:
#ifdef HAVE_CPP11
        CPACSControlSurfaceStep(const CPACSControlSurfaceStep&) = delete;
        CPACSControlSurfaceStep& operator=(const CPACSControlSurfaceStep&) = delete;

        CPACSControlSurfaceStep(CPACSControlSurfaceStep&&) = delete;
        CPACSControlSurfaceStep& operator=(CPACSControlSurfaceStep&&) = delete;
#else
        CPACSControlSurfaceStep(const CPACSControlSurfaceStep&);
        CPACSControlSurfaceStep& operator=(const CPACSControlSurfaceStep&);
#endif
    };
} // namespace generated

// CPACSControlSurfaceStep is customized, use type CCPACSControlSurfaceStep directly
} // namespace tigl
