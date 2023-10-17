#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int *p = NULL;
    p = new int;
    if (!p)
    {
        cout << "Memory allocation failed" << endl;
        exit(1);
    }

    if (p==NULL)
    {
        cout << "Memory allocation failed" << endl;
        exit(1);
    }

    else
    {
        cout << "Memory allocation successful" << endl;
        *p = 12;
        cout << "Integer Value is : " << *p << endl;
        delete p;
        cout << "Memory freed" << endl;
    }

    return 0;
}