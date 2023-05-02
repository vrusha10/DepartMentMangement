cmake_minimum_required(VERSION 3.5)

project(DepartmentManagement VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)
add_subdirectory(Dbase/)
set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        electronicdp.cpp
        electronicdp.h
        electronicdp.ui
        electricaldp.cpp
        electricaldp.h
        electricaldp.ui
        mechanicaldp.cpp
        mechanicaldp.h
        mechanicaldp.ui
        itdp.cpp
        itdp.h
        itdp.ui
        civildp.cpp
        civildp.h
        civildp.ui
        overviewpc.cpp
        overviewpc.h
        overviewpc.ui
        electronicview.cpp
        electronicview.h
        electronicview.ui
        electricalview.cpp
        electricalview.h
        electricalview.ui
        itview.cpp
        itview.h
        itview.ui
        mechanicalview.cpp
        mechanicalview.h
        mechanicalview.ui
        civilview.cpp
        civilview.h
        civilview.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(DepartmentManagement
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET DepartmentManagement APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(DepartmentManagement SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(DepartmentManagement
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(DepartmentManagement PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
#target_link_libraries(DepartmentManagement PRIVATE Qt${QT_VERSION_MAJOR}::Charts)
find_package(Qt6 REQUIRED COMPONENTS Sql)
target_link_libraries(DepartmentManagement PRIVATE Qt6::Sql)
target_link_directories(DepartmentManagement PUBLIC Dbase/)
target_link_libraries(DepartmentManagement PUBLIC Dbase)
#set(REQUIRED_LIBS Core Gui Widgets Charts)
#set(REQUIRED_LIBS_QUALIFIED Qt5::Core Qt5::Charts Qt5::Gui Qt5::Widgets)
set_target_properties(DepartmentManagement PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(DepartmentManagement)
endif()
