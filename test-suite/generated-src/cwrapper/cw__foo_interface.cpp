// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from foo_interface.djinni

#include <iostream> // for debugging
#include <cassert>
#include "wrapper_marshal.hpp"
#include "foo_interface.hpp"

#include "cw__foo_interface.hpp"
#include "cw__foo_primitives.hpp"

std::shared_ptr<::testsuite::FooInterface> DjinniWrapperFooInterface::get(djinni::WrapperRef<DjinniWrapperFooInterface> dw) {
    if (dw) {
        return dw->wrapped_obj;
    }
    return nullptr;
}

void foo_interface___wrapper_add_ref(DjinniWrapperFooInterface * dh) {
    dh->ref_count.fetch_add(1);
}
void foo_interface___wrapper_dec_ref(DjinniWrapperFooInterface * dh) {
    const size_t ref = dh->ref_count.fetch_sub(1);
    if (ref == 1) {// value before sub is returned
        delete dh;
    }
}
djinni::Handle<DjinniWrapperFooInterface> DjinniWrapperFooInterface::wrap(std::shared_ptr<::testsuite::FooInterface> obj) {
    if (obj)
        return djinni::Handle<DjinniWrapperFooInterface>(new DjinniWrapperFooInterface{ std::move(obj) }, foo_interface___wrapper_dec_ref);
    return nullptr;
}

int32_t cw__foo_interface_int32_inverse(DjinniWrapperFooInterface * djinni_this, int32_t x) {
    try {
        return djinni_this->wrapped_obj->int32_inverse(x);
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}

void cw__foo_interface_set_private_int32(DjinniWrapperFooInterface * djinni_this, int32_t private_int) {
    try {
        djinni_this->wrapped_obj->set_private_int32(private_int);
    } CW_TRANSLATE_EXCEPTIONS_RETURN();
}

int32_t cw__foo_interface_get_private_int32(DjinniWrapperFooInterface * djinni_this) {
    try {
        return djinni_this->wrapped_obj->get_private_int32();
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}

void cw__foo_interface_set_private_string(DjinniWrapperFooInterface * djinni_this, DjinniString * private_string) {
    std::unique_ptr<DjinniString> _private_string(private_string);
    try {
        djinni_this->wrapped_obj->set_private_string(DjinniString::toCpp(std::move(_private_string)));
    } CW_TRANSLATE_EXCEPTIONS_RETURN();
}

DjinniString * cw__foo_interface_get_private_string(DjinniWrapperFooInterface * djinni_this) {
    try {
        return DjinniString::fromCpp(djinni_this->wrapped_obj->get_private_string()).release();
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}

DjinniString * cw__foo_interface_get_set_strings(DjinniWrapperFooInterface * djinni_this, DjinniString * ps1, DjinniString * ps2) {
    std::unique_ptr<DjinniString> _ps1(ps1);
    std::unique_ptr<DjinniString> _ps2(ps2);
    try {
        return DjinniString::fromCpp(djinni_this->wrapped_obj->get_set_strings(DjinniString::toCpp(std::move(_ps1)), DjinniString::toCpp(std::move(_ps2)))).release();
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}

DjinniWrapperFooPrimitives * cw__foo_interface_get_foo_primitives(DjinniWrapperFooInterface * djinni_this) {
    try {
        return DjinniWrapperFooPrimitives::wrap(std::move(djinni_this->wrapped_obj->get_foo_primitives())).release();
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}
DjinniWrapperFooInterface * cw__foo_interface_create() {
    try {
        return DjinniWrapperFooInterface::wrap(std::move(::testsuite::FooInterface::create())).release();
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}
