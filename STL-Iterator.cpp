#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 3, 17, 8};
    vector<int> v(arr, arr + 4);
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";

    return 0;
}