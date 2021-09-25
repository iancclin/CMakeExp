add_library(libB libB.cpp)
target_link_libraries(libB PRIVATE libC)