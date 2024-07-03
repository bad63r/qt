# Copyright (C) 2023 The Qt Company Ltd.
# SPDX-License-Identifier: BSD-3-Clause

cmake_minimum_required(VERSION 3.16)
project(ReAmped VERSION 0.1 LANGUAGES CXX)

# if(NOT DEFINED INSTALL_EXAMPLESDIR)
#     set(INSTALL_EXAMPLESDIR "examples")
# endif()

#set(INSTALL_EXAMPLEDIR "${INSTALL_EXAMPLESDIR}/bluetooth/ReAmped")

find_package(Qt6 6.5 REQUIRED COMPONENTS Bluetooth Core Gui Qml Quick)

qt_standard_project_setup(REQUIRES 6.5)

qt_add_executable(ReAmped
    heartrate-global.h
    main.cpp
)

set_target_properties(ReAmped PROPERTIES
    WIN32_EXECUTABLE TRUE
    MACOSX_BUNDLE TRUE
)

target_link_libraries(ReAmped PRIVATE
    Qt::Bluetooth
    Qt::Core
    Qt::Gui
    Qt::Qml
    Qt::Quick
)

set_source_files_properties(ReAmpedSettings.qml PROPERTIES
    QT_QML_SINGLETON_TYPE TRUE
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(ReAmped PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appandroidTest
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

set_property(TARGET ReAmped APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/android)

qt_add_qml_module(ReAmped
    URI HeartRateGame
    VERSION 1.0
    SOURCES
        bluetoothbaseclass.cpp bluetoothbaseclass.h
        connectionhandler.cpp connectionhandler.h
        devicefinder.cpp devicefinder.h
        devicehandler.cpp devicehandler.h
        deviceinfo.cpp deviceinfo.h
    QML_FILES
        App.qml
        BluetoothAlarmDialog.qml
        BottomLine.qml
        Connect.qml
        GameButton.qml
        GamePage.qml
        ReAmpedSettings.qml
        Measure.qml
        SplashScreen.qml
        Stats.qml
        StatsLabel.qml
        TitleBar.qml
        RButton.qml
        Main.qml
    RESOURCES
        images/bt_off_to_on.png
        images/heart.png
        images/logo.png
        images/smart-car.png
        images/forwordArrow.png
        images/backwordArrow.png
)

# if (APPLE)
#     # Using absolute path for shared plist files is a Ninja bug workaround
#     get_filename_component(SHARED_PLIST_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../shared ABSOLUTE)
#     if (IOS)
#         set_target_properties(ReAmped PROPERTIES
#             MACOSX_BUNDLE_INFO_PLIST "${SHARED_PLIST_DIR}/Info.cmake.ios.plist"
#         )
#     else()
#         set_target_properties(ReAmped PROPERTIES
#             MACOSX_BUNDLE_INFO_PLIST "${SHARED_PLIST_DIR}/Info.cmake.macos.plist"
#         )
#     endif()
# endif()

install(TARGETS ReAmped
    RUNTIME DESTINATION ${CMAKE_INSTALL_LIBDIR}
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

# install(TARGETS ReAmped
#     RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
#     BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
#     LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
# )
