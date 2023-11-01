#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    int x = a-b;

    try
    {
        if(x != 0)
        {
            cout<<"Result (a/x) = "<<a/x<<endl;
        }
        else
        {
            throw(x); // Throwing the exception
        }
    }
    catch(int i) // Catching the exception
    {
        cout<<"Exception Caught: Divide by zero"<<endl;
        cout << "Error Code: " << i << "\n";
    }
}