//
// Created by Timzhou on 2022-12-17.
//

#ifndef DATASTRUCTUREANDALGORITHMS_TESTSORT_H
#define DATASTRUCTUREANDALGORITHMS_TESTSORT_H

#include <array>
#include "Sort.h"
#include "ArrayGenerator.h"

template<typename  T>
bool isSorted(const T data[], uint32_t len) {
    for (int i = 1; i < len; i++) {
        if (data[i - 1] > data[i]) {
            return false;
        }
    }
    return true;
}

void testSelectSort()
{
    std::array<int, 4> arraySize = {10, 100, 1000, 10000};
    for (auto n : arraySize) {
        std::unique_ptr<int[]> data = ArrayGenerator::GenerateRandomArray(n);

        auto startTime = std::chrono::steady_clock::now();
        Sort::SelectSort(data.get(), n);
        auto endTime = std::chrono::steady_clock::now();

        std::chrono::duration<double> durationTime = endTime - startTime;
        std::cout << "count = " << n << " " << durationTime.count() << " Second " << " isSorted " << isSorted(data.get(), n) << std::endl;
    }
}

void testInsertSort() {
    std::array<int, 4> arraySize = {10, 100, 1000, 10000};
    for (auto n : arraySize) {
        std::unique_ptr<int[]> data = ArrayGenerator::GenerateRandomArray(n);

        auto startTime = std::chrono::steady_clock::now();
        Sort::InsertSort3(data.get(), n);
        auto endTime = std::chrono::steady_clock::now();

        std::chrono::duration<double> durationTime = endTime - startTime;
        std::cout << "count = " << n << " " << durationTime.count() << " Second " << " isSorted " << isSorted(data.get(), n) << std::endl;
    }
}


#endif//DATASTRUCTUREANDALGORITHMS_TESTSORT_H
