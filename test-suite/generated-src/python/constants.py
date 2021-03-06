# AUTOGENERATED FILE - DO NOT MODIFY!
# This file generated by Djinni from constants.djinni

from djinni.support import MultiSet # default imported in all files
from djinni.exception import CPyException # default imported in all files
from djinni.pycffi_marshal import CPyBoxedBool, CPyBoxedF32, CPyBoxedF64, CPyBoxedI16, CPyBoxedI32, CPyBoxedI64, CPyBoxedI8, CPyPrimitive, CPyRecord, CPyString

from constant_record import ConstantRecord
from constant_record_helper import ConstantRecordHelper
from PyCFFIlib_cffi import ffi, lib

from djinni import exception # this forces run of __init__.py which gives cpp option to call back into py to create exception

class Constants:
    """
     Record containing constants
    Constants
        BOOL_CONSTANT: bool_constant has documentation.
        I8_CONSTANT
        I16_CONSTANT
        I32_CONSTANT
        I64_CONSTANT
        F32_CONSTANT
        F64_CONSTANT: f64_constant has long documentation.
             (Second line of multi-line documentation.
               Indented third line of multi-line documentation.)
        OPT_BOOL_CONSTANT
        OPT_I8_CONSTANT
        OPT_I16_CONSTANT: opt_i16_constant has documentation.
        OPT_I32_CONSTANT
        OPT_I64_CONSTANT
        OPT_F32_CONSTANT: opt_f32_constant has long documentation.
             (Second line of multi-line documentation.
               Indented third line of multi-line documentation.)
        OPT_F64_CONSTANT
        STRING_CONSTANT
        OPT_STRING_CONSTANT
        OBJECT_CONSTANT
        DUMMY: No support for null optional constants
             No support for optional constant records
             No support for constant binary, list, set, map
    """

    c_data_set = MultiSet()

    @staticmethod
    def check_c_data_set_empty():
        assert len(Constants.c_data_set) == 0

    BOOL_CONSTANT = True
    I8_CONSTANT = 1
    I16_CONSTANT = 2
    I32_CONSTANT = 3
    I64_CONSTANT = 4
    F32_CONSTANT = 5.0
    F64_CONSTANT = 5.0
    OPT_BOOL_CONSTANT = True
    OPT_I8_CONSTANT = 1
    OPT_I16_CONSTANT = 2
    OPT_I32_CONSTANT = 3
    OPT_I64_CONSTANT = 4
    OPT_F32_CONSTANT = 5.0
    OPT_F64_CONSTANT = 5.0
    STRING_CONSTANT = "string-constant"
    OPT_STRING_CONSTANT = "string-constant"
    DUMMY = False


    def __init__(self):
        pass

Constants.OBJECT_CONSTANT = ConstantRecord(
    Constants.I32_CONSTANT,
    Constants.STRING_CONSTANT)


