# ColorMapShaders-config.cmake - package configuration file

get_filename_component(SELF_DIR ${CMAKE_CURRENT_LIST_FILE} DIRECTORY)
include(${SELF_DIR}/ColorMapShaders.cmake)

get_target_property(COLORMAPSHADERS_INCLUDES_DIR ColorMapShaders INTERFACE_INCLUDE_DIRECTORIES)
