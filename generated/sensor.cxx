

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from sensor.idl
using RTI Code Generator (rtiddsgen) version 4.7.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>
#include <atomic>
#include <cmath>
#include <limits>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "sensorPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "sensor.hpp"

#include <rti/util/ostream_operators.hpp>

namespace CoreBus {

    // ---- SensorReading:

    SensorReading::SensorReading() :
        sensor_id ("") ,
        sequence_number (0ull) ,
        captured_at_us (0ll) ,
        temperature_celcius (0.0)  {

    }

    SensorReading::SensorReading (const ::omg::types::string_view& sensor_id_,uint64_t sequence_number_,int64_t captured_at_us_,double temperature_celcius_) {
        sensor_id = sensor_id_;
        sequence_number = sequence_number_;
        captured_at_us = captured_at_us_;
        temperature_celcius = temperature_celcius_;
    }

    bool operator == (const SensorReading& a, const SensorReading& b) {

        if (a.sensor_id != b.sensor_id) {
            return false;
        }
        if (a.sequence_number != b.sequence_number) {
            return false;
        }
        if (a.captured_at_us != b.captured_at_us) {
            return false;
        }
        if (std::fabs(a.temperature_celcius - b.temperature_celcius) > std::numeric_limits< double>::epsilon()
        && !(std::fabs(a.temperature_celcius - b.temperature_celcius) < (std::numeric_limits< double>::min)())) {
            return false;
        }

        return true;
    }

    bool operator != (const SensorReading& a, const SensorReading& b) {
        return !operator ==(a, b);
    }

    void swap(SensorReading& a, SensorReading& b) noexcept
    {
        using std::swap;

        swap(a.sensor_id, b.sensor_id);
        swap(a.sequence_number, b.sequence_number);
        swap(a.captured_at_us, b.captured_at_us);
        swap(a.temperature_celcius, b.temperature_celcius);

    }  
    std::ostream& operator << (std::ostream& o,const SensorReading& sample)
    {
        ::rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "sensor_id: " << sample.sensor_id<<", ";
        o << "sequence_number: " << sample.sequence_number<<", ";
        o << "captured_at_us: " << sample.captured_at_us<<", ";
        o << "temperature_celcius: " << std::setprecision(15) << sample.temperature_celcius;
        o <<"]";
        return o;
    }

} // namespace CoreBus  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        template<>
        struct native_type_code< ::CoreBus::SensorReading > {

            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static std::atomic_bool is_initialized {false};

                static DDS_TypeCode SensorReading_g_tc_sensor_id_string;

                static DDS_TypeCode_Member SensorReading_g_tc_members[4]=
                {

                    {
                        (char *)"sensor_id",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"sequence_number",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"captured_at_us",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"temperature_celcius",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode SensorReading_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"CoreBus::SensorReading", /* Name */
                        NULL, /* Ignored */ 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        SensorReading_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for SensorReading*/

                if (is_initialized.load(std::memory_order_acquire)) {
                    return &SensorReading_g_tc;
                }

                SensorReading_g_tc_sensor_id_string = initialize_string_typecode((64L));

                SensorReading_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SensorReading_g_tc_members[0]._representation._typeCode =  (RTICdrTypeCode *)&SensorReading_g_tc_sensor_id_string;
                SensorReading_g_tc_members[1]._representation._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_ulonglong;
                SensorReading_g_tc_members[2]._representation._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_longlong;
                SensorReading_g_tc_members[3]._representation._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                SensorReading_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                SensorReading_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                SensorReading_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ULONGLONG;
                SensorReading_g_tc_members[1]._annotations._defaultValue._u.ulong_long_value = 0ull;
                SensorReading_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_ULONGLONG;
                SensorReading_g_tc_members[1]._annotations._minValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MIN;
                SensorReading_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_ULONGLONG;
                SensorReading_g_tc_members[1]._annotations._maxValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MAX;
                SensorReading_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_LONGLONG;
                SensorReading_g_tc_members[2]._annotations._defaultValue._u.long_long_value = 0ll;
                SensorReading_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_LONGLONG;
                SensorReading_g_tc_members[2]._annotations._minValue._u.long_long_value = RTIXCdrLongLong_MIN;
                SensorReading_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_LONGLONG;
                SensorReading_g_tc_members[2]._annotations._maxValue._u.long_long_value = RTIXCdrLongLong_MAX;
                SensorReading_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                SensorReading_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                SensorReading_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                SensorReading_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                SensorReading_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                SensorReading_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                SensorReading_g_tc._data._sampleAccessInfo = sample_access_info();
                SensorReading_g_tc._data._typePlugin = type_plugin_info();

                is_initialized.store(true, std::memory_order_release);

                return &SensorReading_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static std::atomic_bool is_initialized {false};

                ::CoreBus::SensorReading *sample;

                static RTIXCdrMemberAccessInfo SensorReading_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SensorReading_g_sampleAccessInfo =
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized.load(std::memory_order_acquire)) {
                    return (RTIXCdrSampleAccessInfo*) &SensorReading_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample,
                    ::CoreBus::SensorReading);
                if (sample == NULL) {
                    return NULL;
                }

                SensorReading_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->sensor_id - (char *)sample);

                SensorReading_g_memberAccessInfos[1].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->sequence_number - (char *)sample);

                SensorReading_g_memberAccessInfos[2].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->captured_at_us - (char *)sample);

                SensorReading_g_memberAccessInfos[3].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->temperature_celcius - (char *)sample);

                SensorReading_g_sampleAccessInfo.memberAccessInfos =
                SensorReading_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::CoreBus::SensorReading);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SensorReading_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SensorReading_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SensorReading_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SensorReading_g_sampleAccessInfo.getMemberValuePointerFcn =
                interpreter::get_aggregation_value_pointer< ::CoreBus::SensorReading >;

                SensorReading_g_sampleAccessInfo.languageBinding =
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized.store(true, std::memory_order_release);
                return (RTIXCdrSampleAccessInfo*) &SensorReading_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SensorReading_g_typePlugin =
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &SensorReading_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::CoreBus::SensorReading >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::CoreBus::SensorReading >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::CoreBus::SensorReading >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::CoreBus::SensorReadingPlugin_new,
                ::CoreBus::SensorReadingPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::CoreBus::SensorReading >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::CoreBus::SensorReading& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = SensorReadingPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = SensorReadingPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::CoreBus::SensorReading >::from_cdr_buffer(::CoreBus::SensorReading& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = SensorReadingPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::CoreBus::SensorReading from cdr buffer");
        }

        void topic_type_support< ::CoreBus::SensorReading >::reset_sample(::CoreBus::SensorReading& sample) 
        {
            sample.sensor_id = "";
            sample.sequence_number = 0ull;
            sample.captured_at_us = 0ll;
            sample.temperature_celcius = 0.0;
        }

        void topic_type_support< ::CoreBus::SensorReading >::allocate_sample(::CoreBus::SensorReading& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.sensor_id,  -1, 64L);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
