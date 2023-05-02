cmake_minimum_required(VERSION 3.14)

project(Dbase)
add_library(Dbase STATIC db.h db.cpp)
find_package(Qt6 REQUIRED COMPONENTS Sql)
target_link_libraries(Dbase PRIVATE Qt6::Sql)
#set(REQUIRED_LIBS Core Gui Widgets Charts)s
#set(REQUIRED_LIBS_QUALIFIED Qt5::Core Qt5::Charts Qt5::Gui Qt5::Widgets)
#target_link_libraries(DepartmentManagement PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

