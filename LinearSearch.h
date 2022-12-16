//
// Created by Timzhou on 2022-12-16.
//

#ifndef DATASTRUCTUREANDALGORITHMS_LINEARSEARCH_H
#define DATASTRUCTUREANDALGORITHMS_LINEARSEARCH_H

class LinearSearch
{
public:
    LinearSearch() = delete;
    ~LinearSearch() = delete;

    template<typename T>
    static T Serach(const T data[], uint32_t len, T target) {
        for (int i = 0; i < len; i++) {
            if (target == data[i]) {
                return i;
            }
        }
        return -1;
    }
};

#endif//DATASTRUCTUREANDALGORITHMS_LINEARSEARCH_H
