# CMakeList.txt: проект CMake для les19; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("les19")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (les19 "les19.cpp" "les19.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET les19 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
