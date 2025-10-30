#pragma once
#include <iostream>

// ----------- declaration prototypes ----------------
void arrInsertTop(int elem, int *arr, int &size);
void arrPrintContent(int *arr, int size);


// -------------- inserting methods ----------------
void arrInsertTop(int elem, int *arr, int &size)
{
    arr[size] = elem;
    size++;
}

void arrShiftLift(int *arr, int size)
{
    int tmp = arr[0];

    for (int i = 0; i < size - 1; i++)
        arr[i] = arr[i + 1];

    arr[size - 1] = tmp;
}

void arrShiftRight(int *arr, int size)
{
    int tmp = arr[size - 1];

    for (int i = size - 1; i > 0; i--)
        arr[i] = arr[i - 1];

    arr[0] = tmp;
}



// --------------- printing methods ----------------
void arrPrintContent(int *arr, int size)
{
    std::cout << "Array : ";

    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << ' ';
    }

    std::cout << std::endl;
}
