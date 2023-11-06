#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

void show(int n)
{
    cout << n << " ";
}

int main()
{
    int arr[] = {12, 3, 17, 8}; // Standard C Array
    vector<int> v(arr, arr+4); // Initialize vector with C Array
    for_each(v.begin(), v.end(), show); // apply function show to each element of vector v
}