#include "psst.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int i=0, n=100;
    string arr[100];
    psst pass;
    string line;
    fstream myfile("top_passwords.txt");
    while (myfile.good())
    {
        getline(myfile, line);
        arr[i]=line;
        i++;
    }

    pass.sort(arr, n);

    for (i=0; i<100; i++)
    {
        cout<<arr[i]<<endl;
    }

    myfile.close ();

    return 0;
}
