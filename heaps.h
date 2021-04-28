#pragma once
#include <algorithm>
#include <iostream>
#include <vector>
#include "MinHeap.h"

const int QNT = 100000000;


void testHeap()
{
    MinHeap<int> heap;
    std::vector<int> vec;

    for (int i = 0; i < QNT; ++i)
    {
        int value = rand() % QNT;
        heap.addValue(value);
        vec.push_back(value);
    }

    std::sort(vec.begin(), vec.end());


    int i = 0;
    while (!heap.isEmpty())
    {
        const int value = heap.removeMin();
        //std::cout << value << " - " << vec[i];
        if (value != vec[i])
        {
            std::cout << " ERRO";
        }
        //std::cout << std::endl;
        ++i;
    }
}
int main()
{

    testHeap();

    return 0;
}


