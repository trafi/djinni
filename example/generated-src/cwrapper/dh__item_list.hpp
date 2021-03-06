// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#pragma once

#include <atomic>
#include <experimental/optional>
#include "item_list.hpp"
#ifdef __cplusplus
extern "C" {
#endif

#include "dh__item_list.h"

#ifdef __cplusplus
}
#endif
struct DjinniItemList {
    static djinni::Handle<DjinniRecordHandle> fromCpp(const ::textsort::ItemList& dr);
    static ::textsort::ItemList toCpp(djinni::Handle<DjinniRecordHandle> dh);
    static djinni::Handle<DjinniOptionalRecordHandle> fromCpp(std::experimental::optional<::textsort::ItemList> dc);
    static std::experimental::optional<::textsort::ItemList> toCpp(djinni::Handle<DjinniOptionalRecordHandle> dh);
};
