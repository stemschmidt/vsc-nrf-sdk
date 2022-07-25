cmake_minimum_required(VERSION 3.8.2)
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(playground_app)

target_sources(app PRIVATE src/main.c) # app is defined in zephyr/cmake/app/boilerplate.cmake
