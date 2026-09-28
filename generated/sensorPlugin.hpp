

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from sensor.idl
using RTI Code Generator (rtiddsgen) version 4.7.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef sensorPlugin_1710384975_h
#define sensorPlugin_1710384975_h

#include "sensor.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if defined(NDDS_USER_DLL_EXPORT) && defined(RTI_WIN32)
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#if !defined(RTI_WIN32) && defined(NDDS_USER_SYMBOL_EXPORT)
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __attribute__((visibility("default")))
#endif

namespace CoreBus {

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct SensorReading
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct SensorReading)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * SensorReading must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct SensorReading.
    */
    typedef struct SensorReading SensorReadingKeyHolder;

    #define SensorReadingPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

    #define SensorReadingPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer
    #define SensorReadingPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define SensorReadingPlugin_get_key PRESTypePluginDefaultEndpointData_getKey
    #define SensorReadingPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define SensorReadingPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample
    #define SensorReadingPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern SensorReading*
    SensorReadingPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern SensorReading*
    SensorReadingPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern SensorReading*
    SensorReadingPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool
    SensorReadingPluginSupport_copy_data(
        SensorReading *out,
        const SensorReading *in);

    NDDSUSERDllExport extern void
    SensorReadingPluginSupport_destroy_data_w_params(
        SensorReading *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void
    SensorReadingPluginSupport_destroy_data_ex(
        SensorReading *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void
    SensorReadingPluginSupport_destroy_data(
        SensorReading *sample);

    NDDSUSERDllExport extern void
    SensorReadingPluginSupport_print_data(
        const SensorReading *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern SensorReading*
    SensorReadingPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern SensorReading*
    SensorReadingPluginSupport_create_key(void);

    NDDSUSERDllExport extern void
    SensorReadingPluginSupport_destroy_key_ex(
        SensorReadingKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void
    SensorReadingPluginSupport_destroy_key(
        SensorReadingKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData
    SensorReadingPlugin_on_participant_attached(
        void *registration_data,
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration,
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void
    SensorReadingPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData
    SensorReadingPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration,
        void *container_plugin_context);

    NDDSUSERDllExport extern void
    SensorReadingPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void
    SensorReadingPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        SensorReading *sample,
        void *handle);

    NDDSUSERDllExport extern RTIBool
    SensorReadingPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        SensorReading *out,
        const SensorReading *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    SensorReadingPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const SensorReading *sample,
        ::dds::core::policy::DataRepresentationId representation
        = ::dds::core::policy::DataRepresentation::xcdr());

    NDDSUSERDllExport extern RTIBool
    SensorReadingPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        SensorReading **sample,
        RTIBool * drop_sample,
        struct RTICdrStream *cdrStream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    SensorReadingPlugin_deserialize_from_cdr_buffer(
        SensorReading *sample,
        const char * buffer,
        unsigned int length);

    NDDSUSERDllExport extern unsigned int
    SensorReadingPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind
    SensorReadingPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int
    SensorReadingPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    SensorReadingPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool
    SensorReadingPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        SensorReading ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *cdrStream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    SensorReadingPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        SensorReadingKeyHolder *key,
        const SensorReading *instance);

    NDDSUSERDllExport extern RTIBool
    SensorReadingPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        SensorReading *instance,
        const SensorReadingKeyHolder *key);

    NDDSUSERDllExport extern RTIBool
    SensorReadingPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *cdrStream,
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    SensorReadingPlugin_new(void);

    NDDSUSERDllExport extern void
    SensorReadingPlugin_delete(struct PRESTypePlugin *);

} /* namespace CoreBus  */

#if defined(NDDS_USER_DLL_EXPORT) || defined(NDDS_USER_SYMBOL_EXPORT)
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* sensorPlugin_1710384975_h */
