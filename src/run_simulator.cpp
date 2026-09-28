#include "sensor/simulated_sensor.hpp"

#include <iostream>
#include <chrono>
#include <thread>

int main()
{
    SimulatedSensor sensor{"sensor-01", 20.0};
    std::cout << "Sampling " << sensor.id() << "\n";

    while (true)
    {
        const SensorReading reading = sensor.read();

        std::cout 
        << "sensor=" << reading.sensor_id
        << " sequence=" << reading.sequence_number
        << " temperature=" << reading.temperature_celcius
        << " C\n";

        std::this_thread::sleep_for(
            std::chrono::milliseconds{100});
    }
}
