
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 "6.7.0" REQUIRED COMPONENTS Qml Quick)

#find_package(EdupalsBase REQUIRED)

set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -fexceptions")
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -foperator-names")

add_library(lliurexgvagateplugin SHARED plugin.cpp)

target_link_libraries (lliurexgvagateplugin
    Qt6::Qml
    Qt6::Quick
)

install (TARGETS lliurexgvagateplugin DESTINATION ${QT6_INSTALL_QML}/net/lliurex/gate)
install(FILES qmldir DESTINATION ${QT6_INSTALL_QML}/net/lliurex/gate)
