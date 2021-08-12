//
// Copyright 2021 Pixar
//
// Licensed under the Apache License, Version 2.0 (the "Apache License")
// with the following modification; you may not use this file except in
// compliance with the Apache License and the following modification to it:
// Section 6. Trademarks. is deleted and replaced with:
//
// 6. Trademarks. This License does not grant permission to use the trade
//    names, trademarks, service marks, or product names of the Licensor
//    and its affiliates, except as required to comply with Section 4(c) of
//    the License and to reproduce the content of the NOTICE file.
//
// You may obtain a copy of the Apache License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the Apache License with the above modification is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied. See the Apache License for the specific
// language governing permissions and limitations under the Apache License.
//
////////////////////////////////////////////////////////////////////////
// This file is generated by a script.  Do not edit directly.  Edit the
// schema.template.h file to make changes.

#ifndef PXR_IMAGING_HD_EXT_COMPUTATION_OUTPUT_SCHEMA_H
#define PXR_IMAGING_HD_EXT_COMPUTATION_OUTPUT_SCHEMA_H

#include "pxr/imaging/hd/api.h"

#include "pxr/imaging/hd/schema.h" 

PXR_NAMESPACE_OPEN_SCOPE

//-----------------------------------------------------------------------------

#define HDEXTCOMPUTATIONOUTPUT_SCHEMA_TOKENS \
    (name) \
    (valueType) \

TF_DECLARE_PUBLIC_TOKENS(HdExtComputationOutputSchemaTokens, HD_API,
    HDEXTCOMPUTATIONOUTPUT_SCHEMA_TOKENS);

//-----------------------------------------------------------------------------

class HdExtComputationOutputSchema : public HdSchema
{
public:
    HdExtComputationOutputSchema(HdContainerDataSourceHandle container)
    : HdSchema(container) {}

    //ACCESSORS

    HD_API
    HdTokenDataSourceHandle GetName();
    HD_API
    HdTupleTypeDataSourceHandle GetValueType();

    // RETRIEVING AND CONSTRUCTING

    HD_API
    static HdContainerDataSourceHandle
    BuildRetained(
        const HdTokenDataSourceHandle &name,
        const HdTupleTypeDataSourceHandle &valueType
    );

    class Builder
    {
    public:
        HD_API
        Builder &SetName(
            const HdTokenDataSourceHandle &name);
        HD_API
        Builder &SetValueType(
            const HdTupleTypeDataSourceHandle &valueType);

        HD_API
        HdContainerDataSourceHandle Build();

    private:
        HdTokenDataSourceHandle _name;
        HdTupleTypeDataSourceHandle _valueType;
    };

};

PXR_NAMESPACE_CLOSE_SCOPE

#endif