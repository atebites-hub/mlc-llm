/*!
 * \file tvm_ffi_reflection_compat.h
 * \brief Compatibility layer for TVM FFI reflection headers
 */

#ifndef MLC_LLM_SERVE_TVM_FFI_REFLECTION_COMPAT_H_
#define MLC_LLM_SERVE_TVM_FFI_REFLECTION_COMPAT_H_

// Forward declare reflection classes to avoid include issues
namespace tvm {
namespace ffi {
namespace reflection {

class Registry;

}  // namespace reflection
}  // namespace ffi
}  // namespace tvm

#endif  // MLC_LLM_SERVE_TVM_FFI_REFLECTION_COMPAT_H_
