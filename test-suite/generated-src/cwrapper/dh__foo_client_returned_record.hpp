// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from foo_client_interface.djinni

#pragma once

#include <atomic>
#include <experimental/optional>
#include "foo_client_returned_record.hpp"
#ifdef __cplusplus
extern "C" {
#endif

#include "dh__foo_client_returned_record.h"

#ifdef __cplusplus
}
#endif
struct DjinniFooClientReturnedRecord {
    static djinni::Handle<DjinniRecordHandle> fromCpp(const ::testsuite::FooClientReturnedRecord& dr);
    static ::testsuite::FooClientReturnedRecord toCpp(djinni::Handle<DjinniRecordHandle> dh);
    static djinni::Handle<DjinniOptionalRecordHandle> fromCpp(std::experimental::optional<::testsuite::FooClientReturnedRecord> dc);
    static std::experimental::optional<::testsuite::FooClientReturnedRecord> toCpp(djinni::Handle<DjinniOptionalRecordHandle> dh);
};
