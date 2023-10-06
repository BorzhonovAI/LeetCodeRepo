cmake_minimum_required(VERSION 3.14)
project(leetCodeProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
enable_testing()

add_compile_options(-Wall -Werror)

file(GLOB_RECURSE SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/problems/*.cpp ${CMAKE_CURRENT_SOURCE_DIR}/problems/*.h)
add_executable(${PROJECT_NAME} ${SOURCES} main.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/problems)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
add_subdirectory(libs/googletest)

target_link_libraries(${PROJECT_NAME} gtest)
