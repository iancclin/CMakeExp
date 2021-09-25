cmake_minimum_required(VERSION 3.20)
project(CMakeExp)

set(LINKER "-L${MKLROOT}/lib/intel64 -Wl,--no-as-needed -lmkl_intel_lp64 -lmkl_gnu_thread -lmkl_core -lgomp -lpthread -lm -ldl")

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(libA)
add_subdirectory(libB)
add_subdirectory(libC)

add_executable(CMakeExp main.cpp)
target_link_libraries(CMakeExp PRIVATE libB libA)
#target_link_libraries(CMakeExp PRIVATE libA)
