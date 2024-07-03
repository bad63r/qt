cmake_minimum_required(VERSION 3.16)

project(androidTest VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.5 REQUIRED COMPONENTS Quick)

qt_standard_project_setup(REQUIRES 6.5)


qt_add_executable(appandroidTest
    main.cpp
)

qt_add_qml_module(appandroidTest
    URI androidTest
    VERSION 1.0
    QML_FILES Main.qml RButton.qml


)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appandroidTest PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appandroidTest
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

set_property(TARGET appandroidTest APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/android)


target_link_libraries(appandroidTest
    PRIVATE Qt6::Quick
)

set(qml_resources_files
    "Main.qml"
    "images/forwordArrow.png"
    "images/backwordArrow.png"

)

qt6_add_resources(appandroidTest "qml"
    PREFIX
        "/"
    FILES
        ${qml_resources_files}
)

include(GNUInstallDirs)
install(TARGETS appandroidTest
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
