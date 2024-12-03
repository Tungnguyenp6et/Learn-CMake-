cmake_minimum_required(VERSION 3.5) 
project(HelloApp
        Version 0.0.1
        DESCRIPTION "Hello app"
        LANGUAGES CXX)  
add_executable(HelloAppBinaries main.cpp)
target_compile_features(HelloAppBinaries PRIVATE cxx_std_20)
set(CMAKE_GENERATOR "Visual Studio 17 2022")  