add_executable(MyApp main.cpp)

# Link Against Libraries
target_link_libraries(MyApp PRIVATE mainlibrary)

# Include headers from Libraries
target_include_directories(MyApp PRIVATE ${CMAKE_SOURCE_DIR}/lib)