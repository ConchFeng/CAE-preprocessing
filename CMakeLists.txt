cmake_minimum_required(VERSION 3.16)
project(MyCAEProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Specify the path to OCCT
set(OCCT_DIR "${CMAKE_SOURCE_DIR}/deps/OCCT-7_8_0")

# Add OCCT to the project
find_package(OpenCASCADE REQUIRED PATHS ${OCCT_DIR})

# Include the UI subdirectory
add_subdirectory(UI)

# Link OCCT libraries
set(OCCT_LIBS TKernel TKMath TKService) # Add other necessary OCCT libraries

# Add an example executable or library
add_executable(MyCAEApp main.cpp)

# Link OCCT libraries to the executable
target_link_libraries(MyCAEApp PRIVATE ${OCCT_LIBS})
