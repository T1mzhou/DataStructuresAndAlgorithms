//
// Created by Timzhou on 2022-12-16.
//

#ifndef DATASTRUCTUREANDALGORITHMS_SORT_H
#define DATASTRUCTUREANDALGORITHMS_SORT_H

#include <vector>

class Sort
{
public:
    Sort() = delete;
    ~Sort() = delete;

    template<typename  T>
    static void SelectSort(T data[], uint32_t len) {
        // arr[0...i) 是有序的；arr[i...n) 是无序的,核心是循环不变量i
        for (int i = 0; i < len; i++) {
            uint32_t tmpIndex = i;
            for (int j = i; j < len; j++) {
                if (data[tmpIndex] > data[j]) {
                    tmpIndex = j;
                }
            }

            std::swap(data[i], data[tmpIndex]);
        }
    }

//    template<typename  T>
//    static void SelectSort(T data[], uint32_t len) {
//        // arr[0...i) 是无序的；arr[i...n) 是有序的,核心是循环不变量i
//        for (int i = len - 1; i >= 0; i--) {
//            uint32_t tmpIndex = i;
//            for (int j = i; j >= 0; j--) {
//                if (data[tmpIndex] < data[j]) {
//                    tmpIndex = j;
//                }
//            }
//
//            std::swap(data[i], data[tmpIndex]);
//        }
//    }
};

#endif//DATASTRUCTUREANDALGORITHMS_SORT_H
