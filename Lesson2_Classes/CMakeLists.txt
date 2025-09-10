cmake_minimum_required(VERSION 3.19)
project(Lesson3_Classes LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(Lesson3_Classes
    main.cpp
    animal.h
    animal.cpp
)

target_link_libraries(Lesson3_Classes
    PRIVATE
        Qt::Core
)

include(GNUInstallDirs)

install(TARGETS Lesson3_Classes
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET Lesson3_Classes
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
