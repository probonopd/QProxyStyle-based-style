cmake_minimum_required(VERSION 3.5)

project(QHelloStylePlugin)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

add_library(hello SHARED src/QHelloStyle.cpp src/QHelloStyle.h)

target_link_libraries(hello PRIVATE Qt5::Widgets)

# Determine the installation directory for the plugin based on QT_INSTALL_PLUGINS
set(QHELLOSTYLE_PLUGIN_INSTALL_DIR "${QT_INSTALL_PLUGINS}/styles")

# Get the installation directory for Qt5 plugins
get_target_property(QT5_QMAKE_EXECUTABLE Qt5::qmake IMPORTED_LOCATION)
execute_process(COMMAND ${QT5_QMAKE_EXECUTABLE} -query QT_INSTALL_PLUGINS OUTPUT_VARIABLE QT_INSTALL_PLUGINS_PATH OUTPUT_STRIP_TRAILING_WHITESPACE)

# Determine the installation directory for the plugin
set(QHELLOSTYLE_PLUGIN_INSTALL_DIR "${QT_INSTALL_PLUGINS_PATH}/styles")

# Install the plugin
install(TARGETS hello
        LIBRARY DESTINATION "${QHELLOSTYLE_PLUGIN_INSTALL_DIR}"
        RUNTIME DESTINATION "${QHELLOSTYLE_PLUGIN_INSTALL_DIR}")
