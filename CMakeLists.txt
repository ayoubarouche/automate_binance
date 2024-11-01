cmake_minimum_required(VERSION 3.10)

project(kestar_binance VERSION 1.0)
#set dummy configuration variable value 
set(FILE_PATH ".env")
set(BINANCE_API_KEY "BINANCE_API_KEY")
set(PROJECT_VERSION "PROJECT_VERSION")
set(DEBUG "FALSE")
# make the configuration variables global : 


file (READ ${FILE_PATH} CONFIG)


function(parse_config CONFIG_ITEM KEY VALUE)

# parse each config item and pass it : 
    string(REPLACE "=" ";" CONFIG_ITEM_KEY_VALUE ${CONFIG_ITEM})
    list(GET CONFIG_ITEM_KEY_VALUE 0 TEMP_KEY)
    list(GET CONFIG_ITEM_KEY_VALUE 1 TEMP_VALUE)
    set(${KEY} "${TEMP_KEY}" PARENT_SCOPE)
    set(${VALUE} "${TEMP_VALUE}" PARENT_SCOPE)


endfunction()



string(REPLACE "\n" ";" CONFIG_LINES ${CONFIG})

list(LENGTH CONFIG_LINES CONFIG_SIZE)

set (CONFIG_TEMP_INDEX 0)

while(CONFIG_TEMP_INDEX LESS CONFIG_SIZE)
    list(GET CONFIG_LINES ${CONFIG_TEMP_INDEX} ITEM)
    parse_config("${ITEM}" KEY VALUE)
    if(${KEY} STREQUAL "BINANCE_API_KEY")
        set(${BINANCE_API_KEY} ${VALUE})
        message("yes ther are equel")
    elseif(${KEY} STREQUAL "PROJECT_VERSION")
        message("yes they are equel")
        set(${PROJECT_VERSION} ${VALUE})
    elseif(${KEY} STREQUAL "DEBUG")
        set(${})
    endif()
    math(EXPR CONFIG_TEMP_INDEX "${CONFIG_TEMP_INDEX} + 1")
endwhile()

# configure the configuration file header : 
configure_file("${PROJECT_SOURCE_DIR}/websocket_parser/configuration.config" "${PROJECT_SOURCE_DIR}/websocket_parser/configuration.hpp" @ONLY)
message(${BINANCE_API_KEY})

add_subdirectory(websocket_parser)
