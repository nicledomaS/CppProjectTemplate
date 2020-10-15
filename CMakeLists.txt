cmake_minimum_required(VERSION 3.10)

project(CppProjectTemplate)

if(NOT make_initialize)
    include(cmake/make.cmake)
endif()

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall")

executable(${PROJECT_NAME}
            SOURCES "src/"
            THREADS
            #BOOST system
            MODULES gpio_dev)
