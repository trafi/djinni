# AUTOGENERATED FILE - DO NOT MODIFY!
# This file generated by Djinni from foo_containers.djinni

from djinni.support import MultiSet # default imported in all files
from djinni.exception import CPyException # default imported in all files
from djinni.pycffi_marshal import CPyObject, CPyObjectProxy, CPyString
from PyCFFIlib_cffi import ffi, lib

from djinni import exception # this forces run of __init__.py which gives cpp option to call back into py to create exception

class SetOptionalStringHelper:
    c_data_set = MultiSet()

    @staticmethod
    def check_c_data_set_empty():
        assert len(SetOptionalStringHelper.c_data_set) == 0

    @ffi.callback("size_t(struct DjinniObjectHandle *)")
    def __get_size(cself):
        return len(CPyObjectProxy.toPyObj(None, cself))

    @ffi.callback("struct DjinniObjectHandle *()")
    def __python_create():
        c_ptr = ffi.new_handle(SetOptionalStringProxy(set()))
        SetOptionalStringHelper.c_data_set.add(c_ptr)
        return ffi.cast("struct DjinniObjectHandle *", c_ptr)

    @ffi.callback("void(struct DjinniObjectHandle *, struct DjinniString *)")
    def __python_add(cself, el):
        CPyObjectProxy.toPyObj(None, cself).add(CPyString.toPyOpt(el))

    @ffi.callback("void(struct DjinniObjectHandle * )")
    def __delete(c_ptr):
        assert c_ptr in SetOptionalStringHelper.c_data_set
        SetOptionalStringHelper.c_data_set.remove(c_ptr)

    @ffi.callback("struct DjinniString *(struct DjinniObjectHandle *)")
    def __python_next(cself):
        try:
            with CPyString.fromPyOpt(next(CPyObjectProxy.toPyIter(cself))) as py_obj:
                return py_obj.release_djinni_string()
        except Exception as _djinni_py_e:
            CPyException.setExceptionFromPy(_djinni_py_e)
            return ffi.NULL

    @staticmethod
    def _add_callbacks():
        lib.set_optional_string_add_callback___delete(SetOptionalStringHelper.__delete)
        lib.set_optional_string_add_callback__get_size(SetOptionalStringHelper.__get_size)
        lib.set_optional_string_add_callback__python_create(SetOptionalStringHelper.__python_create)
        lib.set_optional_string_add_callback__python_add(SetOptionalStringHelper.__python_add)
        lib.set_optional_string_add_callback__python_next(SetOptionalStringHelper.__python_next)

SetOptionalStringHelper._add_callbacks()

class SetOptionalStringProxy:
    def iter(d):
        for k in d:
            yield k

    def __init__(self, py_obj):
        self._py_obj = py_obj
        if py_obj is not None:
            self._py_iter = iter(py_obj)
        else:
            self._py_iter = None
