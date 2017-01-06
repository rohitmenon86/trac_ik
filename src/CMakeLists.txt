find_package(Boost COMPONENTS system thread regex filesystem program_options date_time REQUIRED)
rock_library(trac_ik
    SOURCES trac_ik.cpp nlopt_ik.cpp kdl_tl.cpp
    HEADERS trac_ik.hpp nlopt_ik.hpp kdl_tl.hpp
    LIBS ${Boost_SYSTEM_LIBRARY}
	${Boost_FILESYSTEM_LIBRARY}
	${Boost_PROGRAM_OPTIONS_LIBRARY}
        ${Boost_THREAD_LIBRARY}
        ${Boost_MATH_LIBRARY}
        ${Boost_MULTIPRECISION_LIBRARY}
    DEPS_PKGCONFIG base-types base-lib eigen3 orocos-kdl nlopt kdl_parser urdfdom urdfdom_headers urdf)

set(CMAKE_CXX_FLAGS "-std=c++11 ${CMAKE_CXX_FLAGS}")


