#include <iostream>
#include "myArrays.hpp"

enum enMaxSize { MAXSIZE = 100 };

int main(void)
{
    int arr[MAXSIZE];
    int size = 0;

    arrInsertTop(7, arr, size);
    arrInsertTop(20, arr, size);
    arrInsertTop(6, arr, size);
    arrInsertTop(97, arr, size);
    arrInsertTop(13, arr, size);
    arrPrintContent(arr, size);

    arrShiftRight(arr, size);
    arrPrintContent(arr, size);

    return (0);
}
