#include <iostream>
using namespace std;

class Array
{
private:
    int *arr;
    int n;
public:
    Array();
    void show_data();
};

Array::Array()
{
    cout << "\nEnter size: ";
    cin >> n;
    arr = new int[n];
    cout << "\nEnter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

void Array::show_data()
{
    for(int i = 0; i < n; i++)
        cout << " " << arr[i];
}

int main()
{
    int no_object;
    cout << "\nEnter no. of objects: ";
    cin >> no_object;
    Array *ptr = new Array[no_object];
    for(int i=0; i<no_object; i++)
    {
        ptr->show_data();
        ptr++;
    }
    return 0;
}

// Explanation: In the above program, we have created an array of objects dynamically.
// The size of the array is taken from the user and the constructor is called for each object.
// The constructor allocates memory for the array and the destructor frees the memory allocated to the array.
// The destructor is called when the pointer is incremented to point to the next object.
// The destructor is called for each object in the array.