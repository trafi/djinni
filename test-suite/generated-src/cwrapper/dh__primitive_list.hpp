// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from primitive_list.djinni

#pragma once

#include <atomic>
#include <experimental/optional>
#include "primitive_list.hpp"
#ifdef __cplusplus
extern "C" {
#endif

#include "dh__primitive_list.h"

#ifdef __cplusplus
}
#endif
struct DjinniPrimitiveList {
    static djinni::Handle<DjinniRecordHandle> fromCpp(const ::testsuite::PrimitiveList& dr);
    static ::testsuite::PrimitiveList toCpp(djinni::Handle<DjinniRecordHandle> dh);
    static djinni::Handle<DjinniOptionalRecordHandle> fromCpp(std::experimental::optional<::testsuite::PrimitiveList> dc);
    static std::experimental::optional<::testsuite::PrimitiveList> toCpp(djinni::Handle<DjinniOptionalRecordHandle> dh);
};
