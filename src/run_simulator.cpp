#include "sensor/reading.hpp"
#include "sensor/simulated_sensor.hpp"
#include "dds/dds.hpp"
#include "sensor.hpp"

#include <iostream>
#include <chrono>
#include <thread>
#include <vector>

int main()
{
    dds::domain::DomainParticipant participant{0};

    dds::topic::Topic<CoreBus::SensorReading> topic{
        participant,
        "SensorReadings"
    };

    dds::pub::Publisher publisher{participant};

    dds::pub::DataWriter<CoreBus::SensorReading> writer{
        publisher, 
        topic
    };

    std::vector<SimulatedSensor> sensors;

    sensors.reserve(3);

    sensors.emplace_back("sensor-01", 20.0);
    sensors.emplace_back("sensor-02", 25.0);
    sensors.emplace_back("sensor-03", 30.0);

    while (true)
    {
        for (auto& sensor : sensors)
        {
            const auto result = sensor.read();
            if (!result)
            {
                std::cout << "sensor " << sensor.id()
                          << " measurement not available\n";
                
                          continue;
            }

            const SensorReading& reading = *result;

            CoreBus::SensorReading sample{};

            sample.sensor_id = reading.sensor_id;
            sample.sequence_number = reading.sequence_number;
            sample.temperature_celcius = reading.temperature_celcius;

            sample.captured_at_us = 
                std::chrono::duration_cast<std::chrono::microseconds>(
                    reading.captured_at.time_since_epoch()
                ).count();
            
            writer.write(sample);

            std::cout
            << "sensor=" << reading.sensor_id
            << " sequence=" << reading.sequence_number
            << " temperature=" << reading.temperature_celcius
            << " C\n";
        }

        std::this_thread::sleep_for(
            std::chrono::milliseconds{100});
    }


}
