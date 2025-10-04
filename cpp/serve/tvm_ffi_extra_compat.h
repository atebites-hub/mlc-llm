/*!
 * \file tvm_ffi_extra_compat.h
 * \brief Compatibility layer for TVM FFI extra headers
 */

#ifndef MLC_LLM_SERVE_TVM_FFI_EXTRA_COMPAT_H_
#define MLC_LLM_SERVE_TVM_FFI_EXTRA_COMPAT_H_

// Forward declare the Module class to avoid include issues
namespace tvm {
namespace ffi {

class Module;

}  // namespace ffi
}  // namespace tvm

#endif  // MLC_LLM_SERVE_TVM_FFI_EXTRA_COMPAT_H_
