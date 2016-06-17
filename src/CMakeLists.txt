rock_library(trac_ik
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(trac_ik_bin Main.cpp
    DEPS trac_ik)

