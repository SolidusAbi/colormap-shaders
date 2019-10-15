cmake_minimum_required(VERSION 3.9)

project(ColorMapShaders VERSION 0.01
                         LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Core REQUIRED)


add_library(ColorMapShaders SHARED)

target_sources(ColorMapShaders PUBLIC
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/colormap.h>
)

add_subdirectory(shaders/)
add_subdirectory(src/)

# Install
# https://foonathan.net/2016/03/cmake-install/
# LEER!!: https://gitlab.kitware.com/cmake/community/wikis/doc/tutorials/How-to-create-a-ProjectConfig.cmake-file
target_include_directories(ColorMapShaders PUBLIC $<INSTALL_INTERFACE:include/colormap/>)
install(TARGETS ColorMapShaders EXPORT
    LIBRARY DESTINATION ${CMAKE_INSTALL_PREFIX}/lib
)

install(DIRECTORY include/ DESTINATION ${CMAKE_INSTALL_PREFIX}/include)

install(TARGETS ColorMapShaders EXPORT ColorMapShaders DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)
install(EXPORT ColorMapShaders DESTINATION ${CMAKE_INSTALL_PREFIX}/share/colormap/cmake)

## my_library-config.cmake - package configuration file
#get_filename_component(SELF_DIR ${CMAKE_CURRENT_LIST_FILE} DIRECTORY)
#include(${SELF_DIR}/${CMAKE_BUILD_TYPE}/my_library.cmake)

