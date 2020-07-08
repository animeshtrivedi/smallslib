cmake_minimum_required(VERSION 3.10)
project(smallslib VERSION 1.0.1 DESCRIPTION "small shared lib description")
include(GNUInstallDirs)

add_library(smallslib SHARED
        src/smallslib.c
        include/smallslib.h src/private.h src/private.c)

set_target_properties(smallslib PROPERTIES
        VERSION ${PROJECT_VERSION}
        SOVERSION 1
        PUBLIC_HEADER include/smallslib.h)

target_include_directories(smallslib PRIVATE src)
target_include_directories(smallslib PRIVATE include)


install(TARGETS smallslib
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
