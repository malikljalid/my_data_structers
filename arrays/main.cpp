#include <iostream>
#include "myArrays.hpp"

enum enMaxSize { MAXSIZE = 100 };

int main(void)
{
    int arr[MAXSIZE];
    int size = 0;

    insertElemToArray(7, arr, size);
    printArrayContent(arr, size);

    return (0);
}
