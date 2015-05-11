cmake_minimum_required(VERSION 2.8)

project(cppPrimer5thExe)

set(CMAKE_CXX_FLAGS " ${CMAKE_CXX_FLAGS} -std=c++11 -W  ")

# find_package( cppPrimer5thExe QUIET REQUIRED)

# link_directories(${hello_TOOLKIT_ROOT_DIR})

# add_library( LibPrimer
 			 # CplusPlusExe.h
 				# )

# include_directories(   ${hello_INCLUDE_DIRS})

add_executable( 
	main
	main.cpp
	CplusPlusExe.h
	chapter8.cpp
	chapter7.cpp
	chapter6.cpp
	chapter5.cpp
    )

# target_link_libraries( LibPrimer  )
