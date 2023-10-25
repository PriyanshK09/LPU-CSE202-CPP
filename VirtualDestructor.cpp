// Solution to the problem stated in ./NonVirtual-BaseDestructor.cpp

#include <iostream>
using namespace std;

class base
{
    public:
    base()
    {
        cout << "Constructing Base" << endl;
    }
    virtual ~base()
    {
        cout << "Destructing Base" << endl;
    }
};

class derived1:public base
{
    public:
    derived1()
    {
        cout << "Constructing Derived" << endl;
    }
    ~derived1()
    {
        cout << "Destructing Derived" << endl;
    }
};

int main()
{
    base *b = new derived1;
    delete b;
    return 0;
}