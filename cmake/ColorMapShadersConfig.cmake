# ColorMapShadersConfig.cmake - package configuration file

get_filename_component(SELF_DIR ${CMAKE_CURRENT_LIST_FILE} DIRECTORY)
if (EXISTS ${SELF_DIR}/ColorMapShaders.cmake)
    include(${SELF_DIR}/ColorMapShaders.cmake)

    get_target_property(COLORMAPSHADERS_INCLUDE_DIR ColorMapShaders INTERFACE_INCLUDE_DIRECTORIES)
    message(STATUS "Found Colormap-shaders:")
    message(STATUS " - Includes: ${COLORMAPSHADERS_INCLUDE_DIR}")

else()
    message(STATUS "Not Found Colormap-shaders:")
endif()
