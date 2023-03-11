cmake_minimum_required(VERSION 3.0.0)
project(ColorfulCmd VERSION 0.1.0)

include(FetchContent)

FetchContent_Declare(
  termcolor
  GIT_REPOSITORY https://github.com/ikalnytskyi/termcolor.git
  GIT_TAG        master
)

FetchContent_MakeAvailable(termcolor)

include(CTest)
enable_testing()


add_executable(ColorfulCmd main.cpp)

target_link_libraries(ColorfulCmd termcolor)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
