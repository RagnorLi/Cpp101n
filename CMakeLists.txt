cmake_minimum_required(VERSION 3.29)
project(Cpp101n)

set(CMAKE_CXX_STANDARD 20)

include_directories(${PROJECT_SOURCE_DIR}/)

add_executable(Cpp101n main.cpp
        ch1/enjoy.cpp
        ch1/enjoy.h
        ch_runner.cpp
        ch_runner.h
        ch2/hello_cpp.cpp
        ch2/hello_cpp.h
        ch3/functions.h
        ch3/functions.cpp
        ch4/filetypes.h
        ch4/filetypes.cpp
        ch5/debug.h
        ch5/debug.cpp
        ch6/fundamental_datatypes.h
        ch7/type_conversion.h
        ch6/fundamental_datatypes.cpp
        ch7/type_conversion.cpp
        ch0/cpp_compiler_principles.h
        ch0/cpp_compiler_principles.cpp
        ch8/operators.h
        ch8/operators.cpp
        ch9/variable_life.h
        ch9/variable_life.cpp
        ch10/control_flow.h
        ch10/control_flow.cpp
        ch11/error_detection_and_handling.h
        ch11/error_detection_and_handling.cpp
        ch12/unit_test.h
        ch12/unit_test.cpp
        ch13/oop.h
        ch13/oop.cpp
        ch14/containers.h
        ch14/containers.cpp
        ch15/memory.h
        ch15/memory.cpp
        ch16/pointer.h
        ch17/templates.h
        ch19/stl.h
        ch18/io.h
        ch20/llm.h
        ch16/pointer.cpp
        ch17/templates.cpp
        ch18/io.cpp
        ch19/stl.cpp
        ch20/llm.cpp
        ch5/debug.h
        ch5/debug.cpp
        ch4/filetypes.h
        ch4/filetypes.cpp
        ch4/filetypes.cpp
)
