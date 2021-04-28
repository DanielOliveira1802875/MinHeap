#pragma once
#include <string>
template<class T>
class MinHeap
{
    int capacity;
    int size;
    T* array;
    void increaseSizeOfArray();
    int indexOfParent(int childIndex);
    int indexOfLeftChild(int parent);

public:
    MinHeap();
};

template <class T>
void MinHeap<T>::increaseSizeOfArray()
{
    T* newArray = new T[size * 2];
    memcpy(newArray, array, size);
    size *= 2;
    delete array;
    array = newArray;
}

template <class T>
int MinHeap<T>::indexOfParent(int childIndex)
{
    if (childIndex >= size)
        throw ("MinHeap::indexOfParent() argumento invalido");
    return childIndex / 2;
}

template <class T>
int MinHeap<T>::indexOfLeftChild(int parent)
{

}

template <class T>
MinHeap<T>::MinHeap()
{
    capacity = 10;
    size = 0;
    array = new T[10];
}

