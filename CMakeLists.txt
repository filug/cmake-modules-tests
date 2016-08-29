cmake_minimum_required(VERSION 3.0)

enable_testing()

include_directories(${CMAKE_SOURCE_DIR})

# Makefile customization
option(ENABLE_CPPLINT "Enable C++ style checker" TRUE)
option(ENABLE_UNITY   "Enable unit tests"        TRUE)


################################
# CPPLINT - code style checker #
################################
if(ENABLE_CPPLINT)
    include(cmake-modules/cpplint.cmake)
    cpplint_add_subdirectory(cpplint)
endif(ENABLE_CPPLINT)

###############################
# Unity - unit test framework #
###############################
if(ENABLE_UNITY)
    include(cmake-modules/unity.cmake)
    unity_add_test(example1 unity/example1.c)
    
    add_library(somelib STATIC unity/lib_to_test.c)
    unity_add_test(example2 unity/example2.c)
    unity_link_libraries(example2 somelib)
endif(ENABLE_UNITY)
