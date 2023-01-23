project(main_driver)
cmake_minimum_required(VERSION 3.18)
include_directories(include)

add_executable(primeProject src/main.cpp)
target_link_libraries(primeProject HFSM)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
target_link_libraries(primeProject ${CMAKE_THREAD_LIBS_INIT})