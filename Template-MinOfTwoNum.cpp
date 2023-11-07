
#include <iostream>
using namespace std;

template <class T>
T min1(T a, T b) {
    return (a < b) ? a : b;
}

int main() {
    int a = 5, b = 10;
    float c = 3.14, d = 2.71;
    cout << "Minimum of " << a << " and " << b << " is " << min1(a, b) << endl;
    cout << "Minimum of " << c << " and " << d << " is " << min1(c, d) << endl;
    return 0;
}
