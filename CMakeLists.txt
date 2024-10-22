cmake_minimum_required(VERSION 3.10)
project(TestManagerLib)

# Find the ExceptionLib
find_package(ExceptionLib REQUIRED PATHS /root/projects/test/lib/cmake/ExceptionLib)

# Include directories for headers
add_library(TestManagerLib
    src/TestMannger.cpp
    src/Test.cpp
    src/Design.cpp
)

# Specify where to find the include headers
target_include_directories(TestManagerLib PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

# Link ExceptionLib with TestManagerLib
target_link_libraries(TestManagerLib PUBLIC ExceptionLib)

# Set C++ standard
set_target_properties(TestManagerLib PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED YES
)

# Installation instructions (to export the library)
install(TARGETS TestManagerLib
    EXPORT TestManagerLibConfig
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    RUNTIME DESTINATION bin
)

# Create the export configuration file
install(EXPORT TestManagerLibConfig
    FILE TestManagerLibConfig.cmake
    NAMESPACE TestManagerLib::
    DESTINATION lib/cmake/TestManagerLib
)