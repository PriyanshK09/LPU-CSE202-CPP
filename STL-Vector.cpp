#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> v1(10);
    // vector <int> v1; // Zero Size Vector
    cout << "Size is\t" << v1.size() << "\n";
    for(int i=0; i<=9;i++)
    {
        v1[i] = i;
    }

    for(int i=10; i<=19;i++)
    {
        v1.push_back(i);
    }

    cout << "Size is\t" << v1.size() << "\n";
    for(int i=0; i<=19;i++)
    {
        cout << v1[i] << "\t";
    }
    v1.pop_back();
    v1.pop_back();
    cout << "\n New size of the vector: "<< v1.size() << "\n";

    // Use iterator to access the values
    vector <int> :: iterator v=v1.begin();
    while(v!=v1.end())
    {
        cout << "\nValue of V = " << *v;
        v++;
    }

    return 0;
}