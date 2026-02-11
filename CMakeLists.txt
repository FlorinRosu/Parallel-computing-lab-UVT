cmake_minimum_required(VERSION 3.10)
project(HelloOpenMP C)

find_package(OpenMP REQUIRED)

add_executable(hello_openmp hello_openmp.c)

if(OpenMP_C_FOUND)
    target_link_libraries(hello_openmp PUBLIC OpenMP::OpenMP_C)
endif()
