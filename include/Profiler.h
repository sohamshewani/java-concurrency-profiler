#pragma once

#include <iostream>
#include <thread>
#include <chrono>
#include <boost/asio.hpp>

class Profiler {
public:
    void startProfiling();
    void stopProfiling();
    void printResults();
};

void Profiler::startProfiling() {
    std::cout << "Profiling started" << std::endl;
}

void Profiler::stopProfiling() {
    std::cout << "Profiling stopped" << std::endl;
}

void Profiler::printResults() {
    std::cout << "Profiling results printed" << std::endl;
}
