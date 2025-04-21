cmake_minimum_required(VERSION 3.10)
project(ProdApp)

set(CMAKE_CXX_STANDARD 17)
include_directories(include)

file(GLOB_RECURSE SOURCES "src/*.cpp")
add_executable(app ${SOURCES} src/main.cpp)

add_executable(test_math tests/unit/test_math.cpp src/core/math_utils.cpp)
add_executable(test_controller tests/integration/test_controller.cpp src/api/controller.cpp src/network/http_client.cpp src/db/database.cpp)

enable_testing()
add_test(NAME MathTests COMMAND test_math)
add_test(NAME ControllerTests COMMAND test_controller)