#include <iostream>
using namespace std;

template <class T>
void swap1(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int inum1=4, inum2=5;
    float fnum1=4.8, fnum2=5.3;

    char c1='A', c2='a';

    cout << "\nBefore Swapping: ";
    cout << "\nIntegers: " << inum1 << " " << inum2;
    cout << "\nFloats: " << fnum1 << " " << fnum2;
    cout << "\nCharacters: " << c1 << " " << c2;

    swap1<int>(inum1, inum2);
    swap1<float>(fnum1, fnum2);
    swap1<char>(c1, c2);

    cout << "\n\nAfter Swapping: ";
    cout << "\nIntegers: " << inum1 << " " << inum2;
    cout << "\nFloats: " << fnum1 << " " << fnum2;
    cout << "\nCharacters: " << c1 << " " << c2;

    return 0;
}