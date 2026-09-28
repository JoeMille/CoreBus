#include "sensor/simulated_sensor.hpp"
#include "sensor/reading.hpp"
#include <chrono>

SimulatedSensor::SimulatedSensor(
    const std::string& sensor_id,
    double initial_temperature_celcius)
    : sensor_id_(sensor_id),
    next_temperature_celcius_(initial_temperature_celcius)
{
}

    const std::string& SimulatedSensor::id() const 
    {
        return sensor_id_;
    }

    std::optional<SensorReading> SimulatedSensor::read()
    {
        ++sequence_number_;

        if (sequence_number_ % 5 == 0)
        {

            return std::nullopt;
        }

        SensorReading reading{};

        reading.sensor_id = sensor_id_;
        reading.sequence_number = sequence_number_;
        reading.captured_at = std::chrono::system_clock::now();
        reading.temperature_celcius = next_temperature_celcius_;

        next_temperature_celcius_ += 0.25;

        return reading;
    }
