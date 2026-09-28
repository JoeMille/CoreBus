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

add_library(sensor_types
    generated/sensor.cxx
    generated/sensorPlugin.cxx
    )

target_include_directories(sensor_types PUBLIC generated)

target_compile_features(sensor_types PUBLIC cxx_std_17)

target_link_libraries(sensor_types PUBLIC RTIConnextDDS::cpp2_api)

target_link_libraries(sensor_simulator PRIVATE sensor_types)

# Find RTI's CMake helper in the installed SDK.
list(APPEND CMAKE_MODULE_PATH "$ENV{NDDSHOME}/resource/cmake")

# Load RTI's library targets, including cpp2_api.
find_package(RTIConnextDDS REQUIRED)