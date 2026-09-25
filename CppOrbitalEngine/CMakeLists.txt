cmake_minimum_required(VERSION 3.10.0)
project(CppOrbitalEngine VERSION 0.1.0 LANGUAGES C CXX)

add_subdirectory(orbitTools)

add_executable(CppOrbitalEngine main.cpp)


target_link_libraries(${PROJECT_NAME} orbit)


include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
