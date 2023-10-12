cmake_minimum_required(VERSION 3.10)
project(48)  # Set your project name here

# Set C++ standard to C++20 (or any version you prefer)
set(CMAKE_CXX_STANDARD 20)

# Enable all warnings and treat them as errors
add_compile_options(-g -Wall -Werror)

# Add the executable target
add_executable(48 main.cc dh/alice.cc dh/bob.cc dh/aliceConst.cc dh/bobConst.cc dh/dh.cc)

# Include directories for header files
target_include_directories(48 PRIVATE strings)
