//
// Created by Timzhou on 2022-12-16.
//
#include "ArrayGenerator.h"
#include "LinearSearch.h"

void testLinerSerach()
{
    std::array<int, 4> arraySize = {100000, 1000000, 10000000, 100000000};

    for (auto n : arraySize) {
        std::unique_ptr<int[]> data = ArrayGenerator::GenerateOrderArray(n);
        auto startTime = std::chrono::steady_clock::now();

        for (int i = 0; i < 100; i++) {
            int res = LinearSearch::Serach(data.get(), n, n);
        }

        auto endTime = std::chrono::steady_clock::now();
        std::chrono::duration<double> durationTime = endTime - startTime;
        std::cout << "count = " << n <<", 100 runs " << durationTime.count() << " Second"<< std::endl;
    }
}
