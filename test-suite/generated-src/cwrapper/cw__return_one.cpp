// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from multiple_inheritance.djinni

#include <iostream> // for debugging
#include <cassert>
#include "wrapper_marshal.hpp"
#include "return_one.hpp"

#include "cw__return_one.hpp"

std::shared_ptr<::testsuite::ReturnOne> DjinniWrapperReturnOne::get(djinni::WrapperRef<DjinniWrapperReturnOne> dw) {
    if (dw) {
        return dw->wrapped_obj;
    }
    return nullptr;
}

void return_one___wrapper_add_ref(DjinniWrapperReturnOne * dh) {
    dh->ref_count.fetch_add(1);
}
void return_one___wrapper_dec_ref(DjinniWrapperReturnOne * dh) {
    const size_t ref = dh->ref_count.fetch_sub(1);
    if (ref == 1) {// value before sub is returned
        delete dh;
    }
}
djinni::Handle<DjinniWrapperReturnOne> DjinniWrapperReturnOne::wrap(std::shared_ptr<::testsuite::ReturnOne> obj) {
    if (obj)
        return djinni::Handle<DjinniWrapperReturnOne>(new DjinniWrapperReturnOne{ std::move(obj) }, return_one___wrapper_dec_ref);
    return nullptr;
}

int8_t cw__return_one_return_one(DjinniWrapperReturnOne * djinni_this) {
    try {
        return djinni_this->wrapped_obj->return_one();
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}
DjinniWrapperReturnOne * cw__return_one_get_instance() {
    try {
        return DjinniWrapperReturnOne::wrap(std::move(::testsuite::ReturnOne::get_instance())).release();
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}
