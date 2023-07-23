// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.

#include "common.h"

extern "C"
{
    void RedirectForThrowControl()
    {
        PORTABILITY_ASSERT("Implement for PAL");
    }

    void STDMETHODCALLTYPE JIT_ProfilerEnterLeaveTailcallStub(UINT_PTR ProfilerHandle)
    {
    }
};
