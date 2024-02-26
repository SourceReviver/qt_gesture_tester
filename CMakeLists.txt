cmake_minimum_required(VERSION 3.28)
project(gesture_play)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(gesture_play main.cpp
        touchpadtester.cpp
        touchpadtester.h
)
target_link_libraries(gesture_play
        Qt::Core
        Qt::Gui
        Qt::Widgets
)

