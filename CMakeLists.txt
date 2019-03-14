cmake_minimum_required(VERSION 2.8)
project(land_locate_demo)

if (CMAKE_SYSTEM_NAME MATCHES Linux)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread -g -O0")
endif ()

include_directories(inc)
include_directories(${APRIL_TAG_INC_DIR})

FILE(GLOB APRIL_DEMO_SRCS src/*.cpp)

link_directories(${APRIL_TAG_LIB_DIR})

add_executable(${PROJECT_NAME} ${APRIL_DEMO_SRCS})

target_link_libraries(${PROJECT_NAME} PUBLIC april_tag)

if (OpenCV_FOUND)
  message( STATUS "OpenCV Lib Found...")
  target_include_directories(${PROJECT_NAME} PUBLIC ${OpenCV_INCLUDE_DIRS})
  target_link_libraries(${PROJECT_NAME} PUBLIC ${OpenCV_LIBRARIES})
endif ()

