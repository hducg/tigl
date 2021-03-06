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
#include "CPACSEtaIsoLine.h"
#include "CreateIfNotExists.h"
#include "tigl_internal.h"

namespace tigl
{
namespace generated
{
    class CPACSControlSurfaceWingCutOut;

    // This class is used in:
    // CPACSControlSurfaceWingCutOut

    // generated from /xsd:schema/xsd:complexType[185]
    class CPACSControlSurfaceSkinCutOutBorder
    {
    public:
        TIGL_EXPORT CPACSControlSurfaceSkinCutOutBorder(CPACSControlSurfaceWingCutOut* parent);

        TIGL_EXPORT virtual ~CPACSControlSurfaceSkinCutOutBorder();

        TIGL_EXPORT CPACSControlSurfaceWingCutOut* GetParent();

        TIGL_EXPORT const CPACSControlSurfaceWingCutOut* GetParent() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT bool ValidateChoices() const;

        TIGL_EXPORT virtual const boost::optional<std::string>& GetRibDefinitionUID_choice1() const;
        TIGL_EXPORT virtual void SetRibDefinitionUID_choice1(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const boost::optional<int>& GetRibNumber_choice1() const;
        TIGL_EXPORT virtual void SetRibNumber_choice1(const boost::optional<int>& value);

        TIGL_EXPORT virtual const boost::optional<CPACSEtaIsoLine>& GetEtaLE_choice2() const;
        TIGL_EXPORT virtual boost::optional<CPACSEtaIsoLine>& GetEtaLE_choice2();

        TIGL_EXPORT virtual const boost::optional<CPACSEtaIsoLine>& GetEtaTE_choice2() const;
        TIGL_EXPORT virtual boost::optional<CPACSEtaIsoLine>& GetEtaTE_choice2();

        TIGL_EXPORT virtual CPACSEtaIsoLine& GetEtaLE_choice2(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveEtaLE_choice2();

        TIGL_EXPORT virtual CPACSEtaIsoLine& GetEtaTE_choice2(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveEtaTE_choice2();

    protected:
        CPACSControlSurfaceWingCutOut* m_parent;

        boost::optional<std::string>     m_ribDefinitionUID_choice1;
        boost::optional<int>             m_ribNumber_choice1;
        boost::optional<CPACSEtaIsoLine> m_etaLE_choice2;
        boost::optional<CPACSEtaIsoLine> m_etaTE_choice2;

    private:
#ifdef HAVE_CPP11
        CPACSControlSurfaceSkinCutOutBorder(const CPACSControlSurfaceSkinCutOutBorder&) = delete;
        CPACSControlSurfaceSkinCutOutBorder& operator=(const CPACSControlSurfaceSkinCutOutBorder&) = delete;

        CPACSControlSurfaceSkinCutOutBorder(CPACSControlSurfaceSkinCutOutBorder&&) = delete;
        CPACSControlSurfaceSkinCutOutBorder& operator=(CPACSControlSurfaceSkinCutOutBorder&&) = delete;
#else
        CPACSControlSurfaceSkinCutOutBorder(const CPACSControlSurfaceSkinCutOutBorder&);
        CPACSControlSurfaceSkinCutOutBorder& operator=(const CPACSControlSurfaceSkinCutOutBorder&);
#endif
    };
} // namespace generated

// CPACSControlSurfaceSkinCutOutBorder is customized, use type CCPACSControlSurfaceSkinCutOutBorder directly

// Aliases in tigl namespace
#ifdef HAVE_CPP11
using CCPACSControlSurfaceWingCutOut = generated::CPACSControlSurfaceWingCutOut;
#else
typedef generated::CPACSControlSurfaceWingCutOut CCPACSControlSurfaceWingCutOut;
#endif
} // namespace tigl
