#include "psst.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <cstring>

using namespace std;

psst::psst()
{
    //ctor
}

psst::~psst()
{
    //dtor
}

void psst::sort(string* arr, int n)
{
    int j,i;
    string key;

    for (i=0; i<100; i++)
    {
        key = arr[i];
        j = i-1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }

        arr[j+1] = key;
    }
}
