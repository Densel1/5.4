cmake_minimum_required (VERSION 3.20)

 find_package(Catch2 CONFIG REQUIRED)

 project(MyTest)

add_executable (MyTest "MyTest.cpp" "lists.h")

target_link_libraries(MyTest PRIVATE Catch2::Catch2 Catch2::Catch2WithMain)
