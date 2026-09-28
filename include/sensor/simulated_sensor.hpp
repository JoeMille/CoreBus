#pragma once
#include "reading.hpp"
#include <cstdint>
#include <string>
#include <optional>

class SimulatedSensor
{
    public:
        SimulatedSensor(const std::string& sensor_id,
                        double initial_temperature_celcius);

        const std::string& id() const;
        std::optional<SensorReading> read();
    private:
            std::string sensor_id_ {};
            double next_temperature_celcius_ {};
            std::uint64_t sequence_number_ {0};
        };