"""MLC Chat python package.

MLC Chat is the app runtime of MLC LLM.
"""

# Compatibility layer for register_global_func
def register_global_func(func_name, f=None, override=False):
    """Compatibility function for register_global_func - placeholder implementation"""
    # This is a placeholder - the actual registration will be handled by the C++ side
    if callable(func_name):
        f = func_name
        func_name = f.__name__
    return f if f else lambda x: x

from . import protocol, serve
from .libinfo import __version__
from .serve import AsyncMLCEngine, MLCEngine


@register_global_func("runtime.disco.create_socket_session_local_workers", override=True)
def _create_socket_session_local_workers(num_workers):
    """Create the local session for each distributed node over socket session."""
    from tvm.runtime.disco import (  # pylint: disable=import-outside-toplevel
        ProcessSession,
    )

    return ProcessSession(num_workers, num_groups=1, entrypoint="mlc_llm.cli.worker")
