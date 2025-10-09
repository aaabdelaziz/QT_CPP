cmake_minimum_required(VERSION 3.19)
project(2_Classes LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(2_Classes
    main.cpp
    animal.h
    animal.cpp
    mammal.h
    mammal.cpp
)

target_link_libraries(2_Classes
    PRIVATE
        Qt::Core
)

include(GNUInstallDirs)

install(TARGETS 2_Classes
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET 2_Classes
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
