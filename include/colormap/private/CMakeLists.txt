add_subdirectory("IDL/")
add_subdirectory("kbinani/")
add_subdirectory("MATLAB/")
add_subdirectory("transform/")
 
target_sources(ColorMapShaders PRIVATE
         $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/all_colormaps.h>
         $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/colormap/private/init_colormap_list.inc>
)
