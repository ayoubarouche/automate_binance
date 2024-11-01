
add_subdirectory(core)
add_executable(kestar_binance kestar_binance.cpp)
target_link_libraries(kestar_binance PRIVATE core)