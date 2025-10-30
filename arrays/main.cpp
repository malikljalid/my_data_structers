#include <iostream>
#include "myArrays.hpp"

enum enMaxSize { MAXSIZE = 100 };

int main(void)
{
    int arr[MAXSIZE];
    int size = 0;

    arrAddTop(7, arr, size);
    arrAddTop(20, arr, size);
    arrAddTop(6, arr, size);
    arrPrintContent(arr, size);

    arrAddButtom(13, arr, size);
    arrAddButtom(97, arr, size);
    arrPrintContent(arr, size);

    return (0);
}
