cmake_minimum_required(VERSION 3.28)
project(trab_2Project VERSION 0.1.0 LANGUAGES C CXX)

include(FetchContent)
include(CTest)
enable_testing()

add_subdirectory(src)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
