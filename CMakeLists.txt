cmake_minimum_required(VERSION 4.0)
project(SynthCreator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(QT_QML_GENERATE_QMLLS_INI ON)
set(QT_FORCE_CMP0156_TO_VALUE NEW)


find_package(Qt6 REQUIRED COMPONENTS
        Quick
)

qt_standard_project_setup()

qt_policy(SET QTP0004 NEW)
qt_policy(SET QTP0001 NEW)

qt_add_executable(SynthCreator main.cpp
)

qt_add_qml_module(
        SynthCreator
        URI "Main"
        QML_FILES "Widgets/AppWindow.qml"
)
target_link_libraries(SynthCreator
    PRIVATE
        Qt6::Quick
)