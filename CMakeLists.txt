cmake_minimum_required(VERSION 3.16)

project(CoreBus LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(Threads REQUIRED)

add_executable(sensor_simulator
    src/run_simulator.cpp
    src/simulated_sensor.cpp
)

set_target_properties(sensor_simulator PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)

target_include_directories(sensor_simulator PRIVATE include)

target_compile_options(sensor_simulator PRIVATE
    -Wall
    -Wextra
    -Wpedantic
)

target_link_libraries(sensor_simulator PRIVATE Threads::Threads)
