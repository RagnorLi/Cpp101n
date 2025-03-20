cmake_minimum_required(VERSION 3.29)
project(ModernCppLab)

set(CMAKE_CXX_STANDARD 20)

include_directories(${PROJECT_SOURCE_DIR}/)

add_executable(learnCpp main.cpp
        ch1/enjoy.cpp
        ch1/enjoy.h
        ch_runner.cpp
        ch_runner.h
        ch2/hello_cpp.cpp
        ch2/hello_cpp.h
        ch2/statement/statementImpl.cpp
        ch2/statement/statementImpl.h
        ch3/function_family.h
        ch3/function_family.cpp
        ch4/filetype_family.h
        ch4/filetype_family.cpp
)
