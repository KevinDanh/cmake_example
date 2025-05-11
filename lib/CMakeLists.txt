add_library(mainlibrary 
    library1.cpp
    library2.cpp
)
target_include_directories(mainlibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})