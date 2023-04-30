cmake_minimum_required(VERSION 3.25)
project(AdapterDemo)

set(CMAKE_CXX_STANDARD 17)

add_executable(AdapterDemo main.cpp date_lib/Date.h datetime_lib/DateTime.h Adapter.h date_lib/IDate.h datetime_lib/IDateTime.h)
