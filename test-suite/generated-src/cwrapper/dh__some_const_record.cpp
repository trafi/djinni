// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from foo_constants.djinni

#include <iostream> // for debugging
#include <cassert>
#include "wrapper_marshal.hpp"
#include "some_const_record.hpp"

#include "dh__some_const_record.hpp"

static void(*s_py_callback_some_const_record___delete)(DjinniRecordHandle * );
void some_const_record_add_callback___delete(void(* ptr)(DjinniRecordHandle * )) {
    s_py_callback_some_const_record___delete = ptr;
}

void some_const_record___delete(DjinniRecordHandle * drh) {
    s_py_callback_some_const_record___delete(drh);
}
void optional_some_const_record___delete(DjinniOptionalRecordHandle * drh) {
    s_py_callback_some_const_record___delete((DjinniRecordHandle *) drh); // can't static cast, find better way
}
static int16_t ( * s_py_callback_some_const_record_get_some_const_record_f1)(DjinniRecordHandle *);

void some_const_record_add_callback_get_some_const_record_f1(int16_t( * ptr)(DjinniRecordHandle *)) {
    s_py_callback_some_const_record_get_some_const_record_f1 = ptr;
}

static int16_t ( * s_py_callback_some_const_record_get_some_const_record_f2)(DjinniRecordHandle *);

void some_const_record_add_callback_get_some_const_record_f2(int16_t( * ptr)(DjinniRecordHandle *)) {
    s_py_callback_some_const_record_get_some_const_record_f2 = ptr;
}

static DjinniRecordHandle * ( * s_py_callback_some_const_record_python_create_some_const_record)(int16_t,int16_t);

void some_const_record_add_callback_python_create_some_const_record(DjinniRecordHandle *( * ptr)(int16_t,int16_t)) {
    s_py_callback_some_const_record_python_create_some_const_record = ptr;
}

djinni::Handle<DjinniRecordHandle> DjinniSomeConstRecord::fromCpp(const ::testsuite::SomeConstRecord& dr) {

    djinni::Handle<DjinniRecordHandle> _aux(
        s_py_callback_some_const_record_python_create_some_const_record(
            dr.number1,
            dr.number2),
        some_const_record___delete);
    return _aux;
}

::testsuite::SomeConstRecord DjinniSomeConstRecord::toCpp(djinni::Handle<DjinniRecordHandle> dh) {

    auto _aux = ::testsuite::SomeConstRecord(
        s_py_callback_some_const_record_get_some_const_record_f1(dh.get()),
        s_py_callback_some_const_record_get_some_const_record_f2(dh.get()));
    return _aux;
}

djinni::Handle<DjinniOptionalRecordHandle> DjinniSomeConstRecord::fromCpp(std::experimental::optional<::testsuite::SomeConstRecord> dc) {
    if (dc == std::experimental::nullopt) {
        return nullptr;
    }
    return djinni::optionals::toOptionalHandle(std::move(DjinniSomeConstRecord::fromCpp(std::move(* dc))), optional_some_const_record___delete);
}

std::experimental::optional<::testsuite::SomeConstRecord>DjinniSomeConstRecord::toCpp(djinni::Handle<DjinniOptionalRecordHandle> dh) {
     if (dh) {
        return std::experimental::optional<::testsuite::SomeConstRecord>(DjinniSomeConstRecord::toCpp(djinni::optionals::fromOptionalHandle(std::move(dh), some_const_record___delete)));
    }
    return std::experimental::nullopt;
}

