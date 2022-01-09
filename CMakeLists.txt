cmake_minimum_required(VERSION 3.21)
project(Task4)

set(CMAKE_CXX_STANDARD 17)

add_executable(Task4 main.cpp import_helper.cpp import_helper.h export_helper.cpp export_helper.h treat_helper.cpp treat_helper.h filesDAO.cpp filesDAO.h)
