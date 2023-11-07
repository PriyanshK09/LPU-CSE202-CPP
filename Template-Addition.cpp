#include <iostream>
using namespace std;
#define MAX 5

template <class Type>
Type sum(Type A[])
{
    Type Total = 0;
    for (int i = 0; i < MAX; i++)
    {
        Total += A[i];
    }

    return Total;
}

template <class Type>
void read(Type A[])
{
    for (int i = 0; i < MAX; i++)
    {
        cin >> A[i];
    }
}

int main()
{
    int Array[MAX];
    float Array1[MAX];
    cout << "\n Enter the integer array elements : ";
    read<int>(Array);
    cout << "\n Sum of integer array elements : " << sum<int>(Array);

    cout << "\n Enter the float array elements : ";
    read<float>(Array1);
    cout << "\n Sum of float array elements : " << sum<float>(Array1);

    return 0;
}