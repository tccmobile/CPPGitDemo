cmake_minimum_required(VERSION 3.8)
project(CPPGitDemp)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp ItemToPurchase.cpp ItemToPurchase.h)
add_executable(CPPGitDemp ${SOURCE_FILES})