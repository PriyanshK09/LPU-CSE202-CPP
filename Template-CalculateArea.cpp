#include <iostream>
using namespace std;
template <class T>
T square(T num)
{
    return num * num;
}

template <class T, class U>
// Multiplication of 2 Different Data Types
T multiply(T floatNum, U intNum)
{
    return floatNum * intNum;
}

int main()
{
    int num1 = 3;
    cout << "\nSquare of " << num1 << " is " << square<int>(num1);
    float num2 = 5.6;
    cout << "\nSquare of " << num2 << " is " << square<float>(num2);
    double num3 = 123.456;
    cout << "\nSquare of " << num3 << " is " << square<double>(num3);

    cout << "\n\nMultiplication of " << num1 << " and " << num2 << " is " << multiply<int, float>(num1, num2);

    return 0;
}