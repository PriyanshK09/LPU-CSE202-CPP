#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    double *arr, *sum, *avg;
    int size;
    sum = new double;
    avg = new double;
    cout << "Enter the size of the array: " << endl;
    cin >> size;
    cout << "Creating an array of size " << size << "..." << endl;
    arr = new double[size];

    if(arr==NULL||sum==NULL||avg==NULL)
    {
        cout << "Memory allocation failed!" << endl;
        exit(1);
    }
    else
    {
        cout << "Memory allocation successful!" << endl;

        cout << "Enter the elements of the array: " << endl;
        for(int i=0; i<size; i++)
        {
            cin >> arr[i];
        }

        for(int i=0; i<size; i++)
        {
            *sum += arr[i];
        }

        *avg = *sum/size;

        cout << "Sum of the elements of the array: " << *sum << endl;
        cout << "Average of the elements of the array: " << *avg << endl;

        delete [] arr;
        delete sum;
        delete avg;
    }

    return 0;
}