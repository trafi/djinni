// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from foo_containers.djinni

#pragma once // python_cdef_ignore
#include <stdbool.h>  // python_cdef_ignore

#include <stdint.h> // python_cdef_ignore

struct DjinniWrapperFooContainersInterface;
void foo_containers_interface___wrapper_dec_ref(struct DjinniWrapperFooContainersInterface * dh);
void foo_containers_interface___wrapper_add_ref(struct DjinniWrapperFooContainersInterface * dh);

void cw__foo_containers_interface_set_containers_record(struct DjinniWrapperFooContainersInterface * djinni_this, struct DjinniRecordHandle * rec);

struct DjinniRecordHandle * cw__foo_containers_interface_get_containers_record(struct DjinniWrapperFooContainersInterface * djinni_this);

void cw__foo_containers_interface_set_optional_containers_record(struct DjinniWrapperFooContainersInterface * djinni_this, struct DjinniOptionalRecordHandle * rec);

struct DjinniOptionalRecordHandle * cw__foo_containers_interface_get_optional_containers_record(struct DjinniWrapperFooContainersInterface * djinni_this);

void cw__foo_containers_interface_set_optional_map_string_int(struct DjinniWrapperFooContainersInterface * djinni_this, struct DjinniOptionalObjectHandle * m);

struct DjinniOptionalObjectHandle * cw__foo_containers_interface_get_optional_map_string_int(struct DjinniWrapperFooContainersInterface * djinni_this);

void cw__foo_containers_interface_set_optional_list_int(struct DjinniWrapperFooContainersInterface * djinni_this, struct DjinniOptionalObjectHandle * m);

struct DjinniOptionalObjectHandle * cw__foo_containers_interface_get_optional_list_int(struct DjinniWrapperFooContainersInterface * djinni_this);

void cw__foo_containers_interface_set_list_record(struct DjinniWrapperFooContainersInterface * djinni_this, struct DjinniObjectHandle * lr);

void cw__foo_containers_interface_set_list_binary(struct DjinniWrapperFooContainersInterface * djinni_this, struct DjinniObjectHandle * lb);

struct DjinniObjectHandle * cw__foo_containers_interface_get_list_binary(struct DjinniWrapperFooContainersInterface * djinni_this);

struct DjinniWrapperFooContainersInterface * cw__foo_containers_interface_create();

