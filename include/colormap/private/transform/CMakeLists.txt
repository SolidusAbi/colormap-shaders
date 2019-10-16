target_sources(ColorMapShaders PRIVATE
     $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/transform/apricot.h>
     $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/transform/carnation.h>
     $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/transform/ether.h>
     $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/transform/grayscale_banded.h>
     $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/transform/hot_metal.h>
     $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/transform/lava_waves.h>
     $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/transform/malachite.h>
     $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/transform/morning_glory.h>
     $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/transform/peanut_butter_and_jerry.h>
     $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/transform/purple_haze.h>
     $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/transform/rainbow.h>
     $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/transform/rose.h>
     $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/transform/saturn.h>
     $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/transform/seismic.h>
     $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/transform/space.h>
     $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/transform/supernova.h>
)
