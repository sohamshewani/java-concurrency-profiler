#include <iostream>
#include <thread>
#include <chrono>
#include <boost/asio.hpp>

#include "Profiler.h"

void workerFunction() {
    while (true) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        std::cout << "Thread Running" << std::endl;
    }
}

int main() {
    std::thread t1(workerFunction);
    std::thread t2(workerFunction);

    Profiler profiler;
    profiler.startProfiling();
    t1.join();
    t2.join();
    profiler.stopProfiling();
    profiler.printResults();

    return 0;
}