//===-- SBHostOSBinding.cpp -------------------------------------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include "lldb/Bindings/LLDBBinding.h"
#include "lldb/API/LLDB.h"

using namespace lldb;

#ifdef __cplusplus
extern "C" {
#endif

SBFileSpecRef
SBHostOSGetProgramFileSpec()
{
    return reinterpret_cast<SBFileSpecRef>(new SBFileSpec(lldb::SBHostOS::GetProgramFileSpec()));
}

SBFileSpecRef
SBHostOSGetLLDBPythonPath()
{
    return reinterpret_cast<SBFileSpecRef>(new SBFileSpec(lldb::SBHostOS::GetLLDBPythonPath()));
}

SBFileSpecRef
SBHostOSGetLLDBPath(LLDBPathType path_type)
{
    return reinterpret_cast<SBFileSpecRef>(new SBFileSpec(lldb::SBHostOS::GetLLDBPath(path_type)));
}

#ifdef __cplusplus
}
#endif
