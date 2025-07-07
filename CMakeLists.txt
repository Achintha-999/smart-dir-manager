cmake_minimum_required(VERSION 3.15)
project(FileOrganizer)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# For MinGW-w64 on Windows
if (MINGW)
    add_definitions(-static-libgcc -static-libstdc++)
endif()

add_executable(file_organizer src/main.cpp)