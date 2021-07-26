cmake_minimum_required(VERSION 3.19)
project(ProyectoFinal_PS)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ProyectoFinal_PS
        Aeropuerto.cpp
        Aeropuerto.h
        Avion.cpp
        Avion.h
        Boleta.cpp
        Boleta.h
        Fecha.cpp
        Fecha.h
        Hora.cpp
        Hora.h
        main.cpp
        Usuario.cpp
        Usuario.h)
