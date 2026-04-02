cmake_minimum_required(VERSION 3.10)

project(ParallelLab C)

find_package(OpenMP REQUIRED)
find_package(MPI REQUIRED)

add_executable(hello_openmp hello_openmp.c)
target_link_libraries(hello_openmp PUBLIC OpenMP::OpenMP_C)

add_executable(hello_mpi hello_mpi.c)
target_link_libraries(hello_mpi PUBLIC MPI::MPI_C)
