#-------------------------------------#
# CMake file for grid board library   #
#-------------------------------------#


add_library(GridBoard STATIC
    include/grid.h
    src/grid.cpp
)


target_include_directories(GridBoard
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
    PUBLIC ${PROJECT_SOURCE_DIR}/src/games/src/utilities/colors/include
)


target_link_libraries(GridBoard
    PRIVATE raylib
    PRIVATE Colors
)
