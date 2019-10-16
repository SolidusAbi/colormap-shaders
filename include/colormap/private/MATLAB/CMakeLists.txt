target_sources(ColorMapShaders PRIVATE
     $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/MATLAB/autumn.h>
     $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/MATLAB/bone.h>
     $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/MATLAB/cool.h>
     $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/MATLAB/copper.h>
     $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/MATLAB/hot.h>
     $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/MATLAB/hsv.h>
     $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/MATLAB/jet.h>
     $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/MATLAB/parula.h>
     $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/MATLAB/pink.h>
     $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/MATLAB/spring.h>
     $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/MATLAB/summer.h>
     $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/MATLAB/winter.h>
)
 
