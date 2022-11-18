
# create executable
add_executable(
    linked_list_test
    tests/test.cpp
)

#add googletest main lib
target_link_libraries(
    linked_list_test
    GTest::gtest_main)


#make it available for cmake test runner
include(GoogleTest)
gtest_discover_tests(linked_list_test)

