cmake_minimum_required(VERSION 3.29)
project(Bases_de_la_programaci_n_en__C_2)

set(CMAKE_CXX_STANDARD 14)

include_directories(ej3)
include_directories(ej4)

add_executable(Bases_de_la_programaci_n_en__C_2
    ej3/bucles.cpp
    ej3/bucles.h
    ej4/arrays.cpp
    ej4/arrays.h
        main.cpp
        ej3/bucles2.cpp
)
