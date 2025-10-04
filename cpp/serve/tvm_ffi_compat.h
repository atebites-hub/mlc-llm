/*!
 * \file tvm_ffi_compat.h
 * \brief Compatibility layer for TVM FFI v0.20 to v0.22 migration
 */

#ifndef MLC_LLM_SERVE_TVM_FFI_COMPAT_H_
#define MLC_LLM_SERVE_TVM_FFI_COMPAT_H_

#include <tvm/ffi/object.h>

// Compatibility macros for TVM FFI v0.20 to v0.22 migration
// These macros provide the old API using the new v0.22 macros

#define TVM_FFI_DECLARE_OBJECT_INFO(TypeName, ObjectName, ParentType) \
  TVM_FFI_DECLARE_BASE_OBJECT_INFO(ObjectName, ParentType)

#define TVM_FFI_DECLARE_OBJECT_INFO_FINAL(TypeName, ObjectName, ParentType) \
  TVM_FFI_DECLARE_FINAL_OBJECT_INFO(ObjectName, ParentType)

#define TVM_FFI_DEFINE_OBJECT_REF_METHODS_NULLABLE(TypeName, ParentType, ObjectName) \
  TVM_FFI_DEFINE_OBJECT_REF_METHODS(TypeName, ParentType, ObjectName)

#define TVM_FFI_DEFINE_OBJECT_REF_METHODS_NOTNULLABLE(TypeName, ParentType, ObjectName) \
  TVM_FFI_DEFINE_OBJECT_REF_METHODS(TypeName, ParentType, ObjectName)

#endif  // MLC_LLM_SERVE_TVM_FFI_COMPAT_H_
