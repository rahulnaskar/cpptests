cmake_minimum_required(VERSION 3.0.0)
project(cpptests VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)

include(CTest)
enable_testing()

include_directories(${PROJECT_SOURCE_DIR})

add_executable(cpptests main.cpp libs.cpp)

find_package(Threads REQUIRED)

target_link_libraries(cpptests PRIVATE Threads::Threads)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
