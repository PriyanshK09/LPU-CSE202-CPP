#include <iostream>
using namespace std;

class BC
{
public:
    virtual void show()
    {
        cout << "Base class show function called" << endl;
    }
};

class DC : public BC
{
public:
    void show()
    {
        cout << "Derived class show function called" << endl;
    }
};

int main()
{
    BC *bptr;
    BC base;
    bptr = &base;
    cout << "-------- Runtime Polymorphism --------" << endl;
    cout << "bptr points to base class object" << endl;
    bptr->show();

    DC derived;
    bptr = &derived;
    cout << "bptr points to derived class object" << endl;
    bptr->show();

    return 0;
}