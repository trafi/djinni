// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from foo_listener_bf.djinni

#include <iostream> // for debugging
#include <cassert>
#include "wrapper_marshal.hpp"
#include "foo_listener_bf.hpp"

#include "cw__foo_listener_bf.hpp"
#include "cw__foo_listener_bf.hpp"
#include <vector>

static DjinniString *(*s_py_callback_foo_listener_bf_on_string_change)(DjinniObjectHandle * , DjinniString *);
static DjinniString *(*s_py_callback_foo_listener_bf_get_string)(DjinniObjectHandle * );
static DjinniWrapperFooListenerBf *(*s_py_callback_foo_listener_bf_create)(DjinniObjectHandle * );
static void(*s_py_callback_foo_listener_bf_set_listener_bf)(DjinniObjectHandle * , DjinniWrapperFooListenerBf *);
static DjinniWrapperFooListenerBf *(*s_py_callback_foo_listener_bf_get_listener_bf)(DjinniObjectHandle * );
static void(*s_py_callback_foo_listener_bf_set_binary)(DjinniObjectHandle * , DjinniBinary *);
static DjinniBinary *(*s_py_callback_foo_listener_bf_get_binary)(DjinniObjectHandle * );
static DjinniWrapperFooListenerBf *(*s_py_callback_foo_listener_bf_send_return)(DjinniObjectHandle * , DjinniWrapperFooListenerBf *);
static void(*s_py_callback_foo_listener_bf_delete_fl_in_fl)(DjinniObjectHandle * );
static void(*s_py_callback_foo_listener_bf___delete)(DjinniObjectHandle * );

std::shared_ptr<::testsuite::FooListenerBf> DjinniWrapperFooListenerBf::get(djinni::WrapperRef<DjinniWrapperFooListenerBf> dw) {
    if (dw) {
        return dw->wrapped_obj;
    }
    return nullptr;
}

void foo_listener_bf___delete(DjinniObjectHandle * dh) {
    s_py_callback_foo_listener_bf___delete(dh);
}
void foo_listener_bf___wrapper_add_ref(DjinniWrapperFooListenerBf * dh) {
    dh->ref_count.fetch_add(1);
}
void foo_listener_bf___wrapper_dec_ref(DjinniWrapperFooListenerBf * dh) {
    const size_t ref = dh->ref_count.fetch_sub(1);
    if (ref == 1) {// value before sub is returned
        delete dh;
    }
}
djinni::Handle<DjinniWrapperFooListenerBf> DjinniWrapperFooListenerBf::wrap(std::shared_ptr<::testsuite::FooListenerBf> obj) {
    if (obj)
        return djinni::Handle<DjinniWrapperFooListenerBf>(new DjinniWrapperFooListenerBf{ std::move(obj) }, foo_listener_bf___wrapper_dec_ref);
    return nullptr;
}

DjinniWrapperFooListenerBf *  make_proxy_object_from_handle_cw__foo_listener_bf(DjinniObjectHandle * c_ptr) {
    return new DjinniWrapperFooListenerBf{std::make_shared<FooListenerBfPythonProxy>(c_ptr)};
}

DjinniObjectHandle * get_handle_from_proxy_object_cw__foo_listener_bf(DjinniWrapperFooListenerBf * dw) {
    FooListenerBfPythonProxy * cast_ptr = dynamic_cast<FooListenerBfPythonProxy * >(dw->wrapped_obj.get());
    if (!cast_ptr) { return nullptr; }
    else return cast_ptr->get_m_py_obj_handle();
}

bool equal_handles_cw__foo_listener_bf(DjinniWrapperFooListenerBf * dw1, DjinniWrapperFooListenerBf * dw2) {
    return dw1->wrapped_obj == dw2->wrapped_obj;
}

DjinniObjectHandle * FooListenerBfPythonProxy::get_m_py_obj_handle() {
    return m_py_obj_handle;
}

FooListenerBfPythonProxy::FooListenerBfPythonProxy(DjinniObjectHandle * c_ptr) : m_py_obj_handle(c_ptr) {}

FooListenerBfPythonProxy::~FooListenerBfPythonProxy() {
    s_py_callback_foo_listener_bf___delete(m_py_obj_handle);
}

void foo_listener_bf_add_callback_on_string_change(DjinniString *(* ptr)(DjinniObjectHandle * , DjinniString *)) {
    s_py_callback_foo_listener_bf_on_string_change = ptr;
}

void foo_listener_bf_add_callback_get_string(DjinniString *(* ptr)(DjinniObjectHandle * )) {
    s_py_callback_foo_listener_bf_get_string = ptr;
}

void foo_listener_bf_add_callback_create(DjinniWrapperFooListenerBf *(* ptr)(DjinniObjectHandle * )) {
    s_py_callback_foo_listener_bf_create = ptr;
}

void foo_listener_bf_add_callback_set_listener_bf(void(* ptr)(DjinniObjectHandle * , DjinniWrapperFooListenerBf *)) {
    s_py_callback_foo_listener_bf_set_listener_bf = ptr;
}

void foo_listener_bf_add_callback_get_listener_bf(DjinniWrapperFooListenerBf *(* ptr)(DjinniObjectHandle * )) {
    s_py_callback_foo_listener_bf_get_listener_bf = ptr;
}

void foo_listener_bf_add_callback_set_binary(void(* ptr)(DjinniObjectHandle * , DjinniBinary *)) {
    s_py_callback_foo_listener_bf_set_binary = ptr;
}

void foo_listener_bf_add_callback_get_binary(DjinniBinary *(* ptr)(DjinniObjectHandle * )) {
    s_py_callback_foo_listener_bf_get_binary = ptr;
}

void foo_listener_bf_add_callback_send_return(DjinniWrapperFooListenerBf *(* ptr)(DjinniObjectHandle * , DjinniWrapperFooListenerBf *)) {
    s_py_callback_foo_listener_bf_send_return = ptr;
}

void foo_listener_bf_add_callback_delete_fl_in_fl(void(* ptr)(DjinniObjectHandle * )) {
    s_py_callback_foo_listener_bf_delete_fl_in_fl = ptr;
}

void foo_listener_bf_add_callback___delete(void(* ptr)(DjinniObjectHandle * )) {
    s_py_callback_foo_listener_bf___delete = ptr;
}

std::string FooListenerBfPythonProxy::on_string_change(const std::string & private_string) {
    auto _private_string = DjinniString::fromCpp(private_string);
    auto _ret = DjinniString::toCpp(std::move(std::unique_ptr<DjinniString>(s_py_callback_foo_listener_bf_on_string_change(m_py_obj_handle, _private_string.release()))));
    djinni::cw_throw_if_pending();
    return _ret;
}

std::string FooListenerBfPythonProxy::get_string() {
    auto _ret = DjinniString::toCpp(std::move(std::unique_ptr<DjinniString>(s_py_callback_foo_listener_bf_get_string(m_py_obj_handle))));
    djinni::cw_throw_if_pending();
    return _ret;
}

std::shared_ptr<::testsuite::FooListenerBf> FooListenerBfPythonProxy::create() {
    auto _ret = DjinniWrapperFooListenerBf::get(std::move(djinni::Handle<DjinniWrapperFooListenerBf>(s_py_callback_foo_listener_bf_create(m_py_obj_handle), foo_listener_bf___wrapper_dec_ref)));
    djinni::cw_throw_if_pending();
    return _ret;
}

void FooListenerBfPythonProxy::set_listener_bf(const std::shared_ptr<::testsuite::FooListenerBf> & listener) {
    auto _listener = DjinniWrapperFooListenerBf::wrap(std::move(listener));
    s_py_callback_foo_listener_bf_set_listener_bf(m_py_obj_handle, _listener.release());
    djinni::cw_throw_if_pending();
}

std::shared_ptr<::testsuite::FooListenerBf> FooListenerBfPythonProxy::get_listener_bf() {
    auto _ret = DjinniWrapperFooListenerBf::get(std::move(djinni::Handle<DjinniWrapperFooListenerBf>(s_py_callback_foo_listener_bf_get_listener_bf(m_py_obj_handle), foo_listener_bf___wrapper_dec_ref)));
    djinni::cw_throw_if_pending();
    return _ret;
}

void FooListenerBfPythonProxy::set_binary(const std::vector<uint8_t> & b) {
    auto _b = DjinniBinary::fromCpp(b);
    s_py_callback_foo_listener_bf_set_binary(m_py_obj_handle, _b.release());
    djinni::cw_throw_if_pending();
}

std::vector<uint8_t> FooListenerBfPythonProxy::get_binary() {
    auto _ret = DjinniBinary::toCpp(std::move(std::unique_ptr<DjinniBinary>(s_py_callback_foo_listener_bf_get_binary(m_py_obj_handle))));
    djinni::cw_throw_if_pending();
    return _ret;
}

std::shared_ptr<::testsuite::FooListenerBf> FooListenerBfPythonProxy::send_return(const std::shared_ptr<::testsuite::FooListenerBf> & fl_bf) {
    auto _fl_bf = DjinniWrapperFooListenerBf::wrap(std::move(fl_bf));
    auto _ret = DjinniWrapperFooListenerBf::get(std::move(djinni::Handle<DjinniWrapperFooListenerBf>(s_py_callback_foo_listener_bf_send_return(m_py_obj_handle, _fl_bf.release()), foo_listener_bf___wrapper_dec_ref)));
    djinni::cw_throw_if_pending();
    return _ret;
}

void FooListenerBfPythonProxy::delete_fl_in_fl() {
    s_py_callback_foo_listener_bf_delete_fl_in_fl(m_py_obj_handle);
    djinni::cw_throw_if_pending();
}
DjinniString * cw__foo_listener_bf_on_string_change(DjinniWrapperFooListenerBf * djinni_this, DjinniString * private_string) {
    std::unique_ptr<DjinniString> _private_string(private_string);
    try {
        return DjinniString::fromCpp(djinni_this->wrapped_obj->on_string_change(DjinniString::toCpp(std::move(_private_string)))).release();
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}

DjinniString * cw__foo_listener_bf_get_string(DjinniWrapperFooListenerBf * djinni_this) {
    try {
        return DjinniString::fromCpp(djinni_this->wrapped_obj->get_string()).release();
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}

void cw__foo_listener_bf_set_listener_bf(DjinniWrapperFooListenerBf * djinni_this, DjinniWrapperFooListenerBf * listener) {
    djinni::Handle<DjinniWrapperFooListenerBf> _listener(listener, foo_listener_bf___wrapper_dec_ref);
    try {
        djinni_this->wrapped_obj->set_listener_bf(DjinniWrapperFooListenerBf::get(std::move(_listener)));
    } CW_TRANSLATE_EXCEPTIONS_RETURN();
}

DjinniWrapperFooListenerBf * cw__foo_listener_bf_get_listener_bf(DjinniWrapperFooListenerBf * djinni_this) {
    try {
        return DjinniWrapperFooListenerBf::wrap(std::move(djinni_this->wrapped_obj->get_listener_bf())).release();
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}

void cw__foo_listener_bf_set_binary(DjinniWrapperFooListenerBf * djinni_this, DjinniBinary * b) {
    std::unique_ptr<DjinniBinary> _b(b);
    try {
        djinni_this->wrapped_obj->set_binary(DjinniBinary::toCpp(std::move(_b)));
    } CW_TRANSLATE_EXCEPTIONS_RETURN();
}

DjinniBinary * cw__foo_listener_bf_get_binary(DjinniWrapperFooListenerBf * djinni_this) {
    try {
        return DjinniBinary::fromCpp(djinni_this->wrapped_obj->get_binary()).release();
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}

DjinniWrapperFooListenerBf * cw__foo_listener_bf_send_return(DjinniWrapperFooListenerBf * djinni_this, DjinniWrapperFooListenerBf * fl_bf) {
    djinni::Handle<DjinniWrapperFooListenerBf> _fl_bf(fl_bf, foo_listener_bf___wrapper_dec_ref);
    try {
        return DjinniWrapperFooListenerBf::wrap(std::move(djinni_this->wrapped_obj->send_return(DjinniWrapperFooListenerBf::get(std::move(_fl_bf))))).release();
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}

void cw__foo_listener_bf_delete_fl_in_fl(DjinniWrapperFooListenerBf * djinni_this) {
    try {
        djinni_this->wrapped_obj->delete_fl_in_fl();
    } CW_TRANSLATE_EXCEPTIONS_RETURN();
}
DjinniWrapperFooListenerBf * cw__foo_listener_bf_create() {
    try {
        return DjinniWrapperFooListenerBf::wrap(std::move(::testsuite::FooListenerBf::create())).release();
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}
