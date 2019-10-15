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
    ${CMAKE_SOURCE_DIR}/include/colormap/colormap.h
)

add_subdirectory(shaders/)
add_subdirectory(src/)
target_include_directories(ColorMapShaders PUBLIC include/colormap/)


install(TARGETS ColorMapShaders EXPORT ColorMapShadersConfig
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

#install(DIRECTORY include/ DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
#install(DIRECTORY include/ DESTINATION .)

#install(EXPORT ColorMapShadersConfig DESTINATION .)
