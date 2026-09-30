cmake_minimum_required(VERSION 3.10)
project(JAVA-Concurrency-Profiler)

add_executable(JAVA-Concurrency-Profiler src/main.cpp)
target_link_libraries(JAVA-Concurrency-Profiler Boost::thread)

add_custom_target(test COMMAND make test)
add_test(NAME test COMMAND test.sh)
