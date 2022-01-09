cmake_minimum_required(VERSION 3.00)

set(PATCH_VERSION "1" CACHE INTERNAL "Patch version")
set(PROJECT_VERSION 0.0.${PATCH_VERSION})

project(Task4 VERSION ${PROJECT_VERSION})

set(CMAKE_CXX_STANDARD 17)

add_executable(Task4 main.cpp import_helper.cpp import_helper.h export_helper.cpp export_helper.h filesDAO.cpp filesDAO.h our_file.cpp our_file.h file_system_helper.cpp file_system_helper.h our_file_content.cpp our_file_content.h)

set_target_properties(
        Task4 PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
)

install(TARGETS Task4 RUNTIME DESTINATION bin)

set(CPACK_GENERATOR DEB)

set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")

set(CPACK_PACKAGE_CONTACT example@example.com)


include(CPack)