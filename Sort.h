//
// Created by Timzhou on 2022-12-16.
//

#ifndef DATASTRUCTUREANDALGORITHMS_SORT_H
#define DATASTRUCTUREANDALGORITHMS_SORT_H

#include <vector>

class Sort {
public:
    Sort() = delete;
    ~Sort() = delete;

    template<typename T>
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

    template<typename  T>
    static void SelectSort1(T data[], uint32_t len) {
        // arr[0...i) 是无序的；arr[i...n) 是有序的,核心是循环不变量i
        for (int i = len - 1; i >= 0; i--) {
            uint32_t tmpIndex = i;
            for (int j = i; j >= 0; j--) {
                if (data[tmpIndex] < data[j]) {
                    tmpIndex = j;
                }
            }

            std::swap(data[i], data[tmpIndex]);
        }
    }

    template<typename T>
    static void InsertSort(T data[], uint32_t len) {
        // 与选择排序的不同是，选择排序后的顺序是最后的顺序
        // 而插入排序仅仅是当前的几个元素内的有序，整体不一定有序
        for (int i = 0; i < len; i++) {
            for (int j = i; j - 1 >= 0 && data[j] < data[j-1]; j--) {
                std::swap(data[j], data[j-1]);
            }
        }
    }

    template<typename T>
    static void InsertSort1(T data[], uint32_t len) {
        // 与选择排序的不同是，选择排序后的顺序是最后的顺序
        // 而插入排序仅仅是当前的几个元素内的有序，整体不一定有序
        for (int i = 0; i < len; i++) {
            for (int j = i; j - 1 >= 0; j--) {
                if (data[j] < data[j-1]) {
                    std::swap(data[j], data[j-1]);
                } else {
                    break;
                }
            }
        }
    }

    // 优化交换的次数
    template<typename T>
    static void InsertSort2(T data[], uint32_t len) {
        // 与选择排序的不同是，选择排序后的顺序是最后的顺序
        // 而插入排序仅仅是当前的几个元素内的有序，整体不一定有序
        // 有序数组，插入排序算法O(n)
        for (int i = 0; i < len; i++) {
            T tmp = data[i];
            int j;
            for (j = i; j - 1 >= 0 && tmp < data[j-1]; j--) {
                data[j] = data[j-1]; // 往后平移一位
            }
            data[j] = tmp;
        }
    }


    // arr[0...i) 是无序的；arr[i...n) 是有序的,核心是循环不变量i
    template<typename T>
    static void InsertSort3(T data[], uint32_t len) {
        for (int i = len - 1; i >= 0; i--) {
            T tmp = data[i];
            int j;
            for (j = i; j < len - 1 && tmp > data[j + 1]; j++) {
                data[j] = data[j + 1];
            }
            data[j] = tmp;
        }
    }

};

#endif//DATASTRUCTUREANDALGORITHMS_SORT_H
