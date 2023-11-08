// Find() Program Algorithm

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int key;
    int arr[] = {12, 3, 17, 8, 34, 56, 9}; // Standard C Array
    vector<int> v(arr, arr + 7);          // Initialize vector with array
    vector<int>::iterator iter;
    cout << "\nEnter Value : ";
    cin >> key;

    iter = find(v.begin(), v.end(), key); // Find key in vector
    if (iter != v.end()) // Found the Element
        cout << "Element " << key << " found" << endl;
    else
        cout << "Element " << key << " not found" << endl;
}