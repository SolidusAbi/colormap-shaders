add_subdirectory("IDL/")
add_subdirectory("kbinani/")
add_subdirectory("MATLAB/")
add_subdirectory("transform/")
 
target_sources(ColorMapShaders PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/all_colormaps.h>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/init_colormap_list.inc>
)
