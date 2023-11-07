#include <iostream>
using namespace std;
template <class T>
T square(T num)
{
    return num * num;
}

int main()
{
    int num1 = 3;
    cout << "\nSquare of " << num1 << " is " << square<int>(num1);
    float num2 = 5.6;
    cout << "\nSquare of " << num2 << " is " << square<float>(num2);
    double num3 = 123.456;
    cout << "\nSquare of " << num3 << " is " << square<double>(num3);

    return 0;
}