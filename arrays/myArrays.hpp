#pragma once
#include <iostream>

// ----------- declaration prototypes ----------------
void arrAddTop(int elem, int *arr, int &size);
void arrAddButtom(int elem, int *arr, int &size);
void arrPrintContent(int *arr, int size);


// ----------------- shifting methods -----------------
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

// -------------- inserting methods ----------------
void arrAddTop(int elem, int *arr, int &size)
{
    arr[size] = elem;
    size++;
}

void arrAddButtom(int elem, int *arr, int &size)
{
    size++;
    arrShiftRight(arr, size);
    arr[0] = elem;
}

void arrAddInPosition(int elem, int pos, int *arr, int &size)
{
    size++;
    arrShiftRight(arr + pos, size - pos);
    arr[pos] = elem;
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
