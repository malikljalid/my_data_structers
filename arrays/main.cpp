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

    arrAddInPosition(42, 2, arr, size);
    arrPrintContent(arr, size);

    arrDeleteTop(arr, size);
    arrPrintContent(arr, size);

    arrDeleteButtom(arr, size);
    arrPrintContent(arr, size);

    arrDeletePosition(2, arr, size);
    arrPrintContent(arr, size);

    arrDeleteValue(13, arr, size);
    arrPrintContent(arr, size);

    arrAddTop(2001, arr, size);
    arrAddTop(2001, arr, size);
    arrAddTop(1999, arr, size);
    arrAddTop(2001, arr, size);
    arrAddTop(2100, arr, size);
    arrPrintContent(arr, size);

    std::cout << "index : " << arrGetIndexOf(2001, arr, size) << std::endl;
    std::cout << "occ : " << arrGetOccuranceOf(2001, arr, size) << std::endl;

    arrDeleteAllValuesOf(2001, arr, size);
    arrPrintContent(arr, size);

    return (0);
}
