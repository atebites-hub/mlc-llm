"""
TVM Compatibility Layer
Provides minimal TVM modules to bypass import issues
"""

import sys
import os

# Add the TVM submodule to the path
tvm_path = os.path.join(os.path.dirname(__file__), '3rdparty', 'tvm', 'python')
if tvm_path not in sys.path:
    sys.path.insert(0, tvm_path)

# Create minimal TVM base module
class TVMBase:
    """Minimal TVM base module"""
    pass

# Create minimal TVM module
class TVMModule:
    """Minimal TVM module"""
    def __init__(self):
        self.base = TVMBase()
        self.ffi = None
        self.runtime = None
    
    def __getattr__(self, name):
        # Return a dummy function for any missing attributes
        return lambda *args, **kwargs: None

# Create the TVM module
tvm = TVMModule()

# Add to sys.modules to make it importable
sys.modules['tvm'] = tvm
sys.modules['tvm.base'] = tvm.base
sys.modules['tvm.ffi'] = tvm.ffi
sys.modules['tvm.runtime'] = tvm.runtime

print("TVM compatibility layer loaded")
