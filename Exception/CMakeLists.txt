cmake_minimum_required(VERSION 3.10)
project(ExceptionLib)

# Add the exception library
add_library(ExceptionLib
    DivideByZero.cpp
    TestExcpetion/InvaildName.cpp
    TestExcpetion/TestNotExsit.cpp
    TestExcpetion/FileError.cpp
    
)

# Specify where to find the include headers
target_include_directories(ExceptionLib PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../include>  # Include from the include directory above
    $<INSTALL_INTERFACE:include>
)

# Set C++ standard
set_target_properties(ExceptionLib PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED YES
)

# Installation instructions (to export the library)
install(TARGETS ExceptionLib
    EXPORT ExceptionLibConfig
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    RUNTIME DESTINATION bin
)

# Create the export configuration file
install(EXPORT ExceptionLibConfig
    FILE ExceptionLibConfig.cmake
    NAMESPACE ExceptionLib::
    DESTINATION lib/cmake/ExceptionLib
)