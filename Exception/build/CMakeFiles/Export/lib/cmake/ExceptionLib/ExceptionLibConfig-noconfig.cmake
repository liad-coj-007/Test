#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ExceptionLib::ExceptionLib" for configuration ""
set_property(TARGET ExceptionLib::ExceptionLib APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(ExceptionLib::ExceptionLib PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libExceptionLib.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS ExceptionLib::ExceptionLib )
list(APPEND _IMPORT_CHECK_FILES_FOR_ExceptionLib::ExceptionLib "${_IMPORT_PREFIX}/lib/libExceptionLib.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
