//
// Created by Timzhou on 2022-12-16.
//

#ifndef DATASTRUCTUREANDALGORITHMS_ARRAYGENERATOR_H
#define DATASTRUCTUREANDALGORITHMS_ARRAYGENERATOR_H

#include <memory>

class ArrayGenerator
{
public:
    ArrayGenerator() = delete;
    ~ArrayGenerator() = delete;

    static std::unique_ptr<int[]> GenerateOrderArray(uint32_t n) {
        std::unique_ptr<int[]> array = std::make_unique<int[]>(n);

        for (int i = 0; i < n; i++) {
            array[i] = i;
        }

        return array;
    }
};
#endif//DATASTRUCTUREANDALGORITHMS_ARRAYGENERATOR_H
