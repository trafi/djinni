// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from multiple_inheritance.djinni

#pragma once

#include <atomic>
#include <experimental/optional>
#include "first_listener.hpp"
#ifdef __cplusplus
extern "C" {
#endif

#include "cw__first_listener.h"

#ifdef __cplusplus
}
#endif
struct DjinniWrapperFirstListener final {
    DjinniWrapperFirstListener(std::shared_ptr<::testsuite::FirstListener>wo): wrapped_obj(wo) {};

    static std::shared_ptr<::testsuite::FirstListener> get(djinni::Handle<DjinniWrapperFirstListener> dw);
    static djinni::Handle<DjinniWrapperFirstListener> wrap(std::shared_ptr<::testsuite::FirstListener> obj);

    const std::shared_ptr<::testsuite::FirstListener> wrapped_obj;
    std::atomic<size_t> ref_count {1};
};

class FirstListenerPythonProxy final : public ::testsuite::FirstListener {
    public:
        explicit FirstListenerPythonProxy(DjinniObjectHandle * c_ptr);
        ~FirstListenerPythonProxy();
        DjinniObjectHandle * get_m_py_obj_handle();

        void first();

    private:
        DjinniObjectHandle * m_py_obj_handle;
};
