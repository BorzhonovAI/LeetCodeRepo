cmake_minimum_required(VERSION 3.0)
project(leetCodeProject)

add_compile_options(-Wall -Werror)

file(GLOB SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/source/*.cpp ${CMAKE_CURRENT_SOURCE_DIR}/include/${PROJECT_NAME}/*.h)
add_executable(${PROJECT_NAME} ${SOURCES} main.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include/${PROJECT_NAME})

#add_subdirectory(libs/testUtils)
