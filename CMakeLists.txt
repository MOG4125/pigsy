cmake_minimum_required(VERSION 3.10)
project(PigsyPlugin)

# Find the submodule
add_subdirectory(cplug)

set(PLUGIN_NAME "Pigsy")

# Add the user-uploaded DSP file
add_library(${PLUGIN_NAME} SHARED "src/plugin.cpp")

# Link to CPLUG
target_link_libraries(${PLUGIN_NAME} PRIVATE cplug)
