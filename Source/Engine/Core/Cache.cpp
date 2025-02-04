// Copyright (c) 2012-2022 Wojciech Figat. All rights reserved.

#include "Cache.h"
#include "FlaxEngine.Gen.h"

CollectionPoolCache<ISerializeModifier, Cache::ISerializeModifierClearCallback> Cache::ISerializeModifier;

void Cache::ISerializeModifierClearCallback(::ISerializeModifier* obj)
{
    obj->EngineBuild = FLAXENGINE_VERSION_BUILD;
    obj->IdsMapping.Clear();
}

void Cache::Release()
{
    ISerializeModifier.Release();
}
