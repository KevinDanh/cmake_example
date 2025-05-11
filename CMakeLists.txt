cmake_minimum_required(VERSION 3.31)
project(testproject CXX)

# Set output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/exe)  # Set output directory
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib) # Set Dynamic Output Directory
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib) # Set Static Output Directory

# Define global variables for easy path management
set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/app)  
set(LIB_DIR ${CMAKE_CURRENT_SOURCE_DIR}/lib)

# Add subdirectories
add_subdirectory(${LIB_DIR})  
add_subdirectory(${SOURCE_DIR})