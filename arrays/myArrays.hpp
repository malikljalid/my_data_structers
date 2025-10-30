#pragma once
#include <iostream>

// ----------- declaration prototypes ----------------
// ---------------------------------------------------
int  arrGetIndexOf(int value, int *arr, int &size);

void arrShiftLift(int *arr, int size);
void arrShiftRight(int *arr, int size);

void arrAddTop(int elem, int *arr, int &size);
void arrAddButtom(int elem, int *arr, int &size);
void arrAddInPosition(int elem, int pos, int *arr, int &size);

void arrDeleteTop(int *arr, int &size);
void arrDeleteButtom(int *arr, int &size);
void arrDeletePostion(int pos, int *arr, int &size);

void arrPrintContent(int *arr, int size);
// ---------------------------------------------------
// ---------------------------------------------------



// --------------- index getter -----------------------
int  arrGetIndexOf(int value, int *arr, int &size)
{
    for (int i = 0; i < size; i++)
    {
        if (value == arr[i])
            return (i);
    }

    return (-1);
}

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

// -------------- inserting methods -------------------
void arrAddTop(int elem, int *arr, int &size)
{
    arr[size] = elem;
    size++;
}

void arrAddButtom(int elem, int *arr, int &size)
{
    arrAddTop(elem, arr, size);
    arrShiftRight(arr, size);
}

void arrAddInPosition(int elem, int pos, int *arr, int &size)
{
    arrAddTop(elem, arr, size);
    arrShiftRight(arr + pos, size - pos);
}

// --------------- deleting methods -------------------
void arrDeleteTop(int *arr, int &size)
{
    arr[size - 1] = 0;
    size--;
}

void arrDeleteButtom(int *arr, int &size)
{
    arrShiftLift(arr, size);
    arrDeleteTop(arr, size);
}

void arrDeletePosition(int pos, int *arr, int &size)
{
    arrShiftLift(arr + pos, size - pos);
    arrDeleteTop(arr, size);
}

void arrDeleteValue(int value, int *arr, int &size)
{
    arrDeletePosition(arrGetIndexOf(value, arr, size), arr, size);
}

// --------------- printing methods -------------------
void arrPrintContent(int *arr, int size)
{
    std::cout << "Array : ";

    for (int i = 0; i < size; i++)
        std::cout << arr[i] << ' ';

    std::cout << std::endl;
}
