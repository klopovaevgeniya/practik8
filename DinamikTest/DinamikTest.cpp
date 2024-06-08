#include <iostream>
#include "..\practik8\Header.h"
#include "Windows.h"
using namespace std;
int main()
{

    HINSTANCE load;
    load = LoadLibrary(L"DinamikLib.dll");
    typedef int (*sum)(int, int);
    sum Sum;
    Sum = (sum)GetProcAddress(load, "Sum");
    int a = 2;
    int b = 5;
    cout << Sum(a, b);
    FreeLibrary(load);
}

