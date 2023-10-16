#include <iostream>
using namespace std;

class M
{
    protected:
        int m;
    public:
        M(int x)
        {
            m = x;
            cout<<"In M";
        }
};

class N
{
    protected:
        int n;
    public:
        N(int y)
        {
            n = y;
            cout<<"\nIn N";
        }
};

class P:public M,public N
{
    protected:
        int l;
    public:
        P(int p,int q,int r):M(r),N(q)
        {
            l = p;
            cout<<"\nIn P";
        }
        void display()
        {
            cout<<"\nValue of m is "<<m;
            cout<<"\nValue of n is "<<n;
            cout<<"\nValue of p is "<<l;
        }
};

int main()
{
    P obj(3, 2, 1);
    obj.display();
    return 0;
}