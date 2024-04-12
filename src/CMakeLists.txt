        cmake_minimum_required(VERSION 3.14)
        project(datos)

        # GoogleTest requires at least C++14
        set(CMAKE_CXX_STANDARD 14)
        set(CMAKE_CXX_STANDARD_REQUIRED ON)

        find_package(GTest REQUIRED)

        enable_testing()

        add_executable(
          hello_test
          hello_test.cc
          main.c
        )
        target_link_libraries(
          hello_test
          GTest::gtest_main)

        include(GoogleTest)
        gtest_discover_tests(hello_test)
