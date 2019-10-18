cmake_minimum_required(VERSION 3.9)

project(ColorMapShaders VERSION 0.01
                         LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(ColorMapShaders INTERFACE)

#target_include_directories(ColorMapShaders INTERFACE $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/>)

#target_sources(ColorMapShaders INTERFACE
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/colormap.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/all_colormaps.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/init_colormap_list.inc>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/16_Level.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Beach.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Black-White_Linear.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Blue_Waves.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Blue-Green-Red-Yellow.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Blue-Pastel-Red.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Blue-Red_2.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Blue-Red.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Blue-White_Linear.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-Accent.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-Blues.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-BrBG.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-BuGn.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-BuPu.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-Dark2.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-GnBu.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-Greens.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-Greys.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-Oranges.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-OrRd.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-Paired.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-Pastel1.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-Pastel2.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-PiYG.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-PRGn.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-PuBu.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-PuBuGn.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-PuOr.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-PuRd.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-Purples.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-RdBu.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-RdGy.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-RdPu.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-RdYiBu.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-RdYiGn.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-Reds.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-Set1.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-Set2.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-Set3.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-Spectral.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-YIGn.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-YIGnBu.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/CB-YIOrBr.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Eos_A.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Eos_B.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Green-Pink.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Green-Red-Blue-White.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Green-White_Exponential.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Green-White_Linear.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Hardcandy.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Haze.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Hue_Sat_Lightness_1.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Hue_Sat_Lightness_2.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Hue_Sat_Value_1.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Hue_Sat_Value_2.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Mac_Style.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Nature.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Ocean.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Pastels.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Peppermint.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Plasma.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Prism.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Purple-Red+Stripes.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Rainbow_2.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Rainbow_18.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Rainbow.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Rainbow+Black.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Rainbow+White.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Red_Temperature.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Red-Purple.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Standard_Gamma-II.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Steps.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Stern_Special.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Volcano.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/IDL/Waves.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/MATLAB/autumn.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/MATLAB/bone.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/MATLAB/cool.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/MATLAB/copper.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/MATLAB/hot.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/MATLAB/hsv.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/MATLAB/jet.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/MATLAB/parula.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/MATLAB/pink.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/MATLAB/spring.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/MATLAB/summer.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/MATLAB/winter.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/kbinani/altitude.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/transform/apricot.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/transform/carnation.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/transform/ether.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/transform/grayscale_banded.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/transform/hot_metal.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/transform/lava_waves.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/transform/malachite.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/transform/morning_glory.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/transform/peanut_butter_and_jerry.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/transform/purple_haze.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/transform/rainbow.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/transform/rose.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/transform/saturn.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/transform/seismic.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/transform/space.h>
#    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/transform/supernova.h>
#)

# Install
# https://foonathan.net/2016/03/cmake-install/
# LEER!!: https://gitlab.kitware.com/cmake/community/wikis/doc/tutorials/How-to-create-a-ProjectConfig.cmake-file


target_include_directories(ColorMapShaders INTERFACE $<INSTALL_INTERFACE:include/colormap/>)

install(TARGETS ColorMapShaders EXPORT
    LIBRARY DESTINATION lib
)

install(DIRECTORY include/ DESTINATION include)
#install(DIRECTORY shaders/ DESTINATION ${CMAKE_INSTALL_PREFIX}/include/shaders)

install(TARGETS ColorMapShaders EXPORT ColorMapShaders DESTINATION lib)
install(EXPORT ColorMapShaders DESTINATION lib/cmake)
install(FILES ${CMAKE_SOURCE_DIR}/cmake/ColorMapShadersConfig.cmake DESTINATION lib/cmake)

## my_library-config.cmake - package configuration file
#get_filename_component(SELF_DIR ${CMAKE_CURRENT_LIST_FILE} DIRECTORY)
#include(${SELF_DIR}/${CMAKE_BUILD_TYPE}/my_library.cmake)

