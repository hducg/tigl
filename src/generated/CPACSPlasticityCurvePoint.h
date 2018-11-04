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
#include "tigl_internal.h"

namespace tigl
{
namespace generated
{
    // This class is used in:
    // CPACSPostFailure

    // generated from /xsd:schema/xsd:complexType[705]
    /// <summary>
    /// <para>
    /// plasticityCurvePointType</para>
    /// </summary>
    /// <remarks>
    /// <para>
    /// </para>
    /// </remarks>
    class CPACSPlasticityCurvePoint
    {
    public:
        TIGL_EXPORT CPACSPlasticityCurvePoint();
        TIGL_EXPORT virtual ~CPACSPlasticityCurvePoint();

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const double& GetTangentModulus() const;
        TIGL_EXPORT virtual void SetTangentModulus(const double& value);

        TIGL_EXPORT virtual const double& GetTrueStress() const;
        TIGL_EXPORT virtual void SetTrueStress(const double& value);

    protected:
        /// tangent modulus [Pa]
        double m_tangentModulus;

        /// true stress [Pa]
        double m_trueStress;

    private:
#ifdef HAVE_CPP11
        CPACSPlasticityCurvePoint(const CPACSPlasticityCurvePoint&) = delete;
        CPACSPlasticityCurvePoint& operator=(const CPACSPlasticityCurvePoint&) = delete;

        CPACSPlasticityCurvePoint(CPACSPlasticityCurvePoint&&) = delete;
        CPACSPlasticityCurvePoint& operator=(CPACSPlasticityCurvePoint&&) = delete;
#else
        CPACSPlasticityCurvePoint(const CPACSPlasticityCurvePoint&);
        CPACSPlasticityCurvePoint& operator=(const CPACSPlasticityCurvePoint&);
#endif
    };
} // namespace generated

// Aliases in tigl namespace
#ifdef HAVE_CPP11
using CCPACSPlasticityCurvePoint = generated::CPACSPlasticityCurvePoint;
#else
typedef generated::CPACSPlasticityCurvePoint CCPACSPlasticityCurvePoint;
#endif
} // namespace tigl
