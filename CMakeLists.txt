cmake_minimum_required(VERSION 3.10)
project(TestManagerLib)

# Include directories for headers
add_library(TestManagerLib
    src/TestMannger.cpp
    src/Test.cpp
    src/Design.cpp
)

# Specify where to find the include headers
target_include_directories(TestManagerLib PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>  # for the install step
)

# Set C++ standard
set_target_properties(TestManagerLib PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED YES
)

# Installation instructions (to export the library)
install(TARGETS TestManagerLib
    EXPORT TestManagerLibConfig        # Export the target
    ARCHIVE DESTINATION lib            # Static libraries
    LIBRARY DESTINATION lib            # Shared libraries
    RUNTIME DESTINATION bin            # Executables (if applicable)
)

# Install header files
install(DIRECTORY include/ DESTINATION include)

# Create the config files for the library export
install(EXPORT TestManagerLibConfig
    FILE TestManagerLibConfig.cmake
    DESTINATION lib/cmake/TestManagerLib
)