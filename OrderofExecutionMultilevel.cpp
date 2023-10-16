#include <iostream>
using namespace std;

class A
{
    int x,y;
    public:
    A(int i, int j)
    {
        x = i;
        y = j;
        cout << "Constructor A" << endl;
    }
    ~A()
    {
        cout << "Calling Destructor A" << endl;
    }
};

class B : public A
{
    int l, m;
    public:
    B(int a, int b, int c, int d) : A(a,b)
    {
        l = c;
        m = d;
        cout << "Constructor B" << endl;
    }
    ~B()
    {
        cout<<"Calling Distructor B" << endl;
    }
};

class C : public B
{
    int n, m;
    public:
    C(int u, int v, int p, int q, int r, int s):B(p,q,r,s)
    {
        n = u;
        m = v;
        cout << "Constructor C" << endl;
    }
    ~C()
    {
        cout<<"Calling Distructor C" << endl;
    }
};

int main()
{
    C obj1(1,2,3,4,5,6);
    return 0;
}