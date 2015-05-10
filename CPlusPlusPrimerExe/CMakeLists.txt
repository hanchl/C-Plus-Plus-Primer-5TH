cmake_minimum_required(VERSION 2.8)

project(cppPrimer5thExe)

set(CMAKE_CXX_FLAGS " ${CMAKE_CXX_FLAGS} -std==c++11 -W   ")


# find_package(hello QUIET REQUIRED)

# link_directories(${hello_TOOLKIT_ROOT_DIR})

 add_library( LibPrimer
 			 CplusPlusExe.h
 				)

# include_directories(   ${hello_INCLUDE_DIRS})

# hello_add_executable( hello    metrixDivi.cu )
add_executable( 
	main
	main.cpp
    )

 target_link_libraries( LibPrimer  )

