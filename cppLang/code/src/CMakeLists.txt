cmake_minimum_required(VERSION 3.23.2)

# Project name `c++`
project(c++)

# include dictionary
include_directories(includes)
file(GLOB_RECURSE SRC_FILES "components/*.cpp")

add_executable(${PROJECT_NAME} ${SRC_FILES} main.cpp)

# Downloadallthesubmodules
# find_package(GIT QUIT)

# if(GIT_FOUND AND EXISTS "${PROJECT_SOURCE_DIR}/.git")
# # Update submodules as needed
# option(GIT_SUBMODULE "Check submoudles during build" , ON)

# if(GIT_SUBMODULE)
# message(STATUS "Submodule update")
# execute_process(COMMAND ${GIT_EXECUTABLE} submodule update --init --recursive
# WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
# RESULT_VARIABLE GIT_SUBMOD_RESULT)

# if(NOT GIT_SUBMOD_RESULT EQUAL "0")
# message(FATAL_ERROR "git submodule update --init failed with ${GIT_SUBMOD_RESULT}, please checkout")
# endif()
# endif()
# endif()

# Check all the submodules
# example:
# if(NOT EXISTS "${PROJECT_SOURCE_DIR}/libs/glfw/CMakeLists/txt")
# message(FATAL_ERROR "The glfw submodules was not downloaded! GIT_SUBMODULE was turned off or failed.")
# endif()

# For library
# add_subdirectory(libs/glfw)
# include_directories(${PROJECT_SOURCE_DIR}/libs/glfw/deps/)
# target_include_directories(${PROJECT_NAME} PUBLIC libs/glfw/include)
# target_link_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR} libs/glfw/src)
# target_link_libraries(${PROJECT_NAME} glfw)
