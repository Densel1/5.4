cmake_minimum_required (VERSION 3.20)

 find_package(Catch2 CONFIG REQUIRED)

#add_executable (1 "1.cpp" "1.h")


add_executable (MyTest "MyTest.cpp" "1.h")

#target_link_libraries(1 PRIVATE Catch2::Catch2 Catch2::Catch2WithMain)
target_link_libraries(MyTest PRIVATE Catch2::Catch2 Catch2::Catch2WithMain)

#if (CMAKE_VERSION VERSION_GREATER 3.12)
#  set_property(TARGET 1 PROPERTY CXX_STANDARD 20)
#endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
