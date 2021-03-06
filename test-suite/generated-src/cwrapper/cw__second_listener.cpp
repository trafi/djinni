// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from multiple_inheritance.djinni

#include <iostream> // for debugging
#include <cassert>
#include "wrapper_marshal.hpp"
#include "second_listener.hpp"

#include "cw__second_listener.hpp"

static void(*s_py_callback_second_listener_second)(DjinniObjectHandle * );
static void(*s_py_callback_second_listener___delete)(DjinniObjectHandle * );

std::shared_ptr<::testsuite::SecondListener> DjinniWrapperSecondListener::get(djinni::WrapperRef<DjinniWrapperSecondListener> dw) {
    if (dw) {
        return dw->wrapped_obj;
    }
    return nullptr;
}

void second_listener___delete(DjinniObjectHandle * dh) {
    s_py_callback_second_listener___delete(dh);
}
void second_listener___wrapper_add_ref(DjinniWrapperSecondListener * dh) {
    dh->ref_count.fetch_add(1);
}
void second_listener___wrapper_dec_ref(DjinniWrapperSecondListener * dh) {
    const size_t ref = dh->ref_count.fetch_sub(1);
    if (ref == 1) {// value before sub is returned
        delete dh;
    }
}
djinni::Handle<DjinniWrapperSecondListener> DjinniWrapperSecondListener::wrap(std::shared_ptr<::testsuite::SecondListener> obj) {
    if (obj)
        return djinni::Handle<DjinniWrapperSecondListener>(new DjinniWrapperSecondListener{ std::move(obj) }, second_listener___wrapper_dec_ref);
    return nullptr;
}

DjinniWrapperSecondListener *  make_proxy_object_from_handle_cw__second_listener(DjinniObjectHandle * c_ptr) {
    return new DjinniWrapperSecondListener{std::make_shared<SecondListenerPythonProxy>(c_ptr)};
}

DjinniObjectHandle * get_handle_from_proxy_object_cw__second_listener(DjinniWrapperSecondListener * dw) {
    SecondListenerPythonProxy * cast_ptr = dynamic_cast<SecondListenerPythonProxy * >(dw->wrapped_obj.get());
    if (!cast_ptr) { return nullptr; }
    else return cast_ptr->get_m_py_obj_handle();
}

bool equal_handles_cw__second_listener(DjinniWrapperSecondListener * dw1, DjinniWrapperSecondListener * dw2) {
    return dw1->wrapped_obj == dw2->wrapped_obj;
}

DjinniObjectHandle * SecondListenerPythonProxy::get_m_py_obj_handle() {
    return m_py_obj_handle;
}

SecondListenerPythonProxy::SecondListenerPythonProxy(DjinniObjectHandle * c_ptr) : m_py_obj_handle(c_ptr) {}

SecondListenerPythonProxy::~SecondListenerPythonProxy() {
    s_py_callback_second_listener___delete(m_py_obj_handle);
}

void second_listener_add_callback_second(void(* ptr)(DjinniObjectHandle * )) {
    s_py_callback_second_listener_second = ptr;
}

void second_listener_add_callback___delete(void(* ptr)(DjinniObjectHandle * )) {
    s_py_callback_second_listener___delete = ptr;
}

void SecondListenerPythonProxy::second() {
    s_py_callback_second_listener_second(m_py_obj_handle);
    djinni::cw_throw_if_pending();
}
