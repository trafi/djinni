// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from multiple_inheritance.djinni

#include <iostream> // for debugging
#include <cassert>
#include "wrapper_marshal.hpp"
#include "listener_caller.hpp"

#include "cw__first_listener.hpp"
#include "cw__listener_caller.hpp"
#include "cw__second_listener.hpp"

std::shared_ptr<::testsuite::ListenerCaller> DjinniWrapperListenerCaller::get(djinni::WrapperRef<DjinniWrapperListenerCaller> dw) {
    if (dw) {
        return dw->wrapped_obj;
    }
    return nullptr;
}

void listener_caller___wrapper_add_ref(DjinniWrapperListenerCaller * dh) {
    dh->ref_count.fetch_add(1);
}
void listener_caller___wrapper_dec_ref(DjinniWrapperListenerCaller * dh) {
    const size_t ref = dh->ref_count.fetch_sub(1);
    if (ref == 1) {// value before sub is returned
        delete dh;
    }
}
djinni::Handle<DjinniWrapperListenerCaller> DjinniWrapperListenerCaller::wrap(std::shared_ptr<::testsuite::ListenerCaller> obj) {
    if (obj)
        return djinni::Handle<DjinniWrapperListenerCaller>(new DjinniWrapperListenerCaller{ std::move(obj) }, listener_caller___wrapper_dec_ref);
    return nullptr;
}

void cw__listener_caller_callFirst(DjinniWrapperListenerCaller * djinni_this) {
    try {
        djinni_this->wrapped_obj->callFirst();
    } CW_TRANSLATE_EXCEPTIONS_RETURN();
}

void cw__listener_caller_callSecond(DjinniWrapperListenerCaller * djinni_this) {
    try {
        djinni_this->wrapped_obj->callSecond();
    } CW_TRANSLATE_EXCEPTIONS_RETURN();
}
DjinniWrapperListenerCaller * cw__listener_caller_init(DjinniWrapperFirstListener * first_l, DjinniWrapperSecondListener * second_l) {
    djinni::Handle<DjinniWrapperFirstListener> _first_l(first_l, first_listener___wrapper_dec_ref);
    djinni::Handle<DjinniWrapperSecondListener> _second_l(second_l, second_listener___wrapper_dec_ref);
    try {
        return DjinniWrapperListenerCaller::wrap(std::move(::testsuite::ListenerCaller::init(DjinniWrapperFirstListener::get(std::move(_first_l)), DjinniWrapperSecondListener::get(std::move(_second_l))))).release();
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}
