// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from foo_containers.djinni

#include <iostream> // for debugging
#include <cassert>
#include "wrapper_marshal.hpp"
#include "foo_containers_record.hpp"

#include "dh__foo_containers_record.hpp"
#include "dh__foo_some_other_record.hpp"
#include "dh__list_binary.hpp"
#include "dh__list_date.hpp"
#include "dh__list_int32_t.hpp"
#include "dh__list_list_string.hpp"
#include "dh__list_optional_binary.hpp"
#include "dh__list_record_foo_some_other_record.hpp"
#include "dh__list_string.hpp"
#include "dh__map_boxed_int32_t_set_string.hpp"
#include "dh__map_int8_t_list_date.hpp"
#include "dh__map_int8_t_set_string.hpp"
#include "dh__map_optional_string_optional_string.hpp"
#include "dh__map_string_int32_t.hpp"
#include "dh__map_string_string.hpp"
#include "dh__set_optional_string.hpp"
#include "dh__set_string.hpp"
#include <chrono>
#include <experimental/optional>
#include <vector>

static void(*s_py_callback_list_record_foo_some_other_record___delete)(DjinniObjectHandle *);
void list_record_foo_some_other_record_add_callback___delete(void(* ptr)(DjinniObjectHandle *)) {
    s_py_callback_list_record_foo_some_other_record___delete = ptr;
}

void list_record_foo_some_other_record___delete(DjinniObjectHandle * drh) {
    s_py_callback_list_record_foo_some_other_record___delete(drh);
}
void optional_list_record_foo_some_other_record___delete(DjinniOptionalObjectHandle *  drh) {
    s_py_callback_list_record_foo_some_other_record___delete((DjinniObjectHandle *) drh);
}
static DjinniRecordHandle * ( * s_py_callback_list_record_foo_some_other_record__get_elem)(DjinniObjectHandle *, size_t);

void list_record_foo_some_other_record_add_callback__get_elem(DjinniRecordHandle *( * ptr)(DjinniObjectHandle *, size_t)) {
    s_py_callback_list_record_foo_some_other_record__get_elem = ptr;
}

static size_t ( * s_py_callback_list_record_foo_some_other_record__get_size)(DjinniObjectHandle *);

void list_record_foo_some_other_record_add_callback__get_size(size_t( * ptr)(DjinniObjectHandle *)) {
    s_py_callback_list_record_foo_some_other_record__get_size = ptr;
}

static DjinniObjectHandle * ( * s_py_callback_list_record_foo_some_other_record__python_create)();

void list_record_foo_some_other_record_add_callback__python_create(DjinniObjectHandle *( * ptr)()) {
    s_py_callback_list_record_foo_some_other_record__python_create = ptr;
}

static void ( * s_py_callback_list_record_foo_some_other_record__python_add)(DjinniObjectHandle *, DjinniRecordHandle *);

void list_record_foo_some_other_record_add_callback__python_add(void( * ptr)(DjinniObjectHandle *, DjinniRecordHandle *)) {
    s_py_callback_list_record_foo_some_other_record__python_add = ptr;
}

djinni::Handle<DjinniObjectHandle> DjinniListRecordFooSomeOtherRecord::fromCpp(const std::vector<::testsuite::FooSomeOtherRecord> & dc) {
    djinni::Handle<DjinniObjectHandle> _handle(s_py_callback_list_record_foo_some_other_record__python_create(), & list_record_foo_some_other_record___delete);
    size_t size = dc.size();
    for (int i = 0; i < size; i++) {
        auto _el = DjinniFooSomeOtherRecord::fromCpp(dc[i]);
        s_py_callback_list_record_foo_some_other_record__python_add(_handle.get(), _el.release());
    }

    return _handle;
}

std::vector<::testsuite::FooSomeOtherRecord> DjinniListRecordFooSomeOtherRecord::toCpp(djinni::Handle<DjinniObjectHandle> dh) {
    std::vector<::testsuite::FooSomeOtherRecord>_ret;
    size_t size = s_py_callback_list_record_foo_some_other_record__get_size(dh.get());
    _ret.reserve(size);

    for (int i = 0; i < size; i++) {
        _ret.push_back(DjinniFooSomeOtherRecord::toCpp(std::move(djinni::Handle<DjinniRecordHandle>(s_py_callback_list_record_foo_some_other_record__get_elem(dh.get(), i), foo_some_other_record___delete))));
    }

    return _ret;
}

djinni::Handle<DjinniOptionalObjectHandle> DjinniListRecordFooSomeOtherRecord::fromCpp(std::experimental::optional<std::vector<::testsuite::FooSomeOtherRecord>> dc) {
    if (dc == std::experimental::nullopt) {
        return nullptr;
    }
    return djinni::optionals::toOptionalHandle(std::move(DjinniListRecordFooSomeOtherRecord::fromCpp(std::move(* dc))), optional_list_record_foo_some_other_record___delete);
}

std::experimental::optional<std::vector<::testsuite::FooSomeOtherRecord>>DjinniListRecordFooSomeOtherRecord::toCpp(djinni::Handle<DjinniOptionalObjectHandle> dh) {
     if (dh) {
        return std::experimental::optional<std::vector<::testsuite::FooSomeOtherRecord>>(DjinniListRecordFooSomeOtherRecord::toCpp(djinni::optionals::fromOptionalHandle(std::move(dh), list_record_foo_some_other_record___delete)));
    }
    return std::experimental::nullopt;
}

