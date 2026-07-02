cmake_minimum_required(VERSION 3.10)
project(central_alertas)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(central_alertas
    main.cpp
    alerta.cpp
    central.cpp
    alertas/alerta_critico.cpp
    alertas/alerta_aviso.cpp
    alertas/alerta_info.cpp
    alertas/alerta_debug.cpp
)
