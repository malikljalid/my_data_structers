#pragma once
#include <iostream>

// ----------- declaration prototypes ----------------
void insertElemToArray(int elem, int *arr, int &size);
void printArrayContent(int *arr, int size);


// -------------- inserting methods ----------------
void insertElemToArray(int elem, int *arr, int &size)
{
    arr[size] = elem;
    size++;
}


// --------------- printing methods ----------------
void printArrayContent(int *arr, int size)
{
    std::cout << "Array : ";

    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << ' ';
    }

    std::cout << std::endl;
}
