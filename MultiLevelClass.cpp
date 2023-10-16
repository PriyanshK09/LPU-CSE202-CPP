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

// Explanation :
// The code above is a simple example of multi-level inheritance. Here, class P is derived from class M and class N.
// And class M and class N are derived from class P. So, the class P is the base class for class M and class N.
// And class M and class N are the base classes for class P. The constructor of the base class is called first and then the constructor of the derived class is called.
// The constructor of the base class is called in the order in which they are inherited. And the destructor is called in the reverse order of the constructor.
// So, the constructor of class M is called first, then the constructor of class N is called and then the constructor of class P is called.
// And the destructor of class P is called first, then the destructor of class N is called and then the destructor of class M is called.