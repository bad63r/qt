cmake_minimum_required(VERSION 3.16)

project(ULC VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.4 REQUIRED COMPONENTS Quick SerialPort)

qt_standard_project_setup()

qt_add_executable(appULC
    main.cpp
    serialcommunication.h
    serialcommunication.cpp
)

set_target_properties(appULC PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appULC
    PRIVATE Qt6::Quick
    Qt6::SerialPort
)

set(qml_resources_files
    "Main.qml"
    "ApplicationWindow.qml"
    "ApplicationFlow.qml"
    "SideBar.qml"
    "SideBarForm.qml"
    "CmdButton.qml"
    "USwitch.qml"
    "SerialSettings.qml"
    "images/icons/terminal/terminal1.png"
    "images/icons/terminal/terminal2.png"
    "images/icons/terminal/terminal3.png"
    "images/icons/terminal/terminal4.png"
    "images/icons/switch/check.png"
    "images/icons/switch/uncheck.png"

)

qt6_add_resources(appULC "qml"
    PREFIX
        "/"
    FILES
        ${qml_resources_files}
)

install(TARGETS appULC
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
