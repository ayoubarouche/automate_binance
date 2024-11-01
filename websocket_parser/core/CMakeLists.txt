add_library(core STATIC core.cpp core.hpp)
target_include_directories(core PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})