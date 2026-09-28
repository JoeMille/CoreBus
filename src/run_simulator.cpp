#include "sensor/reading.hpp"
#include "sensor/simulated_sensor.hpp"

#include <iostream>
#include <chrono>
#include <thread>
#include <vector>

int main()
{
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
