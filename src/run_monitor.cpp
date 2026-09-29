#include <dds/dds.hpp>
#include "sensor.hpp"

#include <iostream>
#include <chrono>
#include <thread>

int main () {
    // joining same domain as simulator 
    dds::domain::DomainParticipant participant {0};

    dds::topic::Topic<CoreBus::SensorReading> topic {
        participant,
        "SensorReadings"
    };

    dds::sub::Subscriber subscriber{participant};

    dds::sub::DataReader<CoreBus::SensorReading> reader{
        subscriber,
        topic
    };

    while (true)
    {
        auto samples = reader.take();

        for (const auto& sample : samples)
        {
            if (!sample.info().valid())
            {
                continue;
            }

            const auto& reading = sample.data();

            std::cout
                << "RECEIVED sensor=" << reading.sensor_id
                << " sequence=" << reading.sequence_number
                << " temperature=" << reading.temperature_celcius
                << " C\n";
        }

        std::this_thread::sleep_for(
            std::chrono::milliseconds{100}
        );
    }
}
