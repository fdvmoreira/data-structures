# data structure course
cmake_minimum_required(VERSION 3.17)
project(data-structure)

SET(CMAKE_CXX_STANDARD 17)

# download googletest library
include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY  https://github.com/fdvmoreira/googletest.git
    GIT_TAG         15460959cbbfa20e66ef0b5ab497367e47fc0a04 #v1.12.0
    )
FetchContent_MakeAvailable(googletest)

#enable tesing
enable_testing()

# import subdirectories
add_subdirectory(linked-list)

