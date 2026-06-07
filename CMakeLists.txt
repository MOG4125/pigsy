cmake_minimum_required(VERSION 3.10)
project(PigsyPlugin)

set(PLUGIN_NAME "Pigsy")

# Add the user-uploaded DSP file
add_library(${PLUGIN_NAME} SHARED "src/plugin.cpp")
