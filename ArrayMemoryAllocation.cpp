#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int *arr;
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;
    cout << "Creating an array of size " << size << endl;
    arr = new int[size];
    if(arr == NULL)
    {
        cout << "Memory not allocated." << endl;
        exit(1);
    }
    else
    {
        cout << "Memory successfully allocated using new keyword." << endl;
        cout << "Enter the elements of the array: " << endl;
        for(int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        cout << "The elements of the array are: " << endl;
        for(int i = 0; i < size; i++)
        {
            cout << *(arr+i) << " " << endl;
        }
    }
    delete [] arr;
    cout << "Memory deallocated" << endl;
    return 0;
}