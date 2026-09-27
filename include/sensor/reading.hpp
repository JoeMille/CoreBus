#pragma once 
#include <string>
#include <cstdint>
#include <chrono>

struct SensorReading {
     std::string sensor_id {};    
     std::uint64_t sequence_number {};
     std::chrono::system_clock::time_point captured_at {};
     double temperature_celcius{};
};