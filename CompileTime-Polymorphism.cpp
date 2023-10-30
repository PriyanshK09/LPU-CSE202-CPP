#include <iostream>
using namespace std;

class BC
{
public:
    void show()
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
    cout << "EARLY BINDING" << endl;
    cout << "-----------------------------------" << endl;
    cout << "bptr points to base class object" << endl;
    // Early binding because compiler already knows that the show() method is there in base class
    bptr->show();
    
    // derived class object
    DC derived;
    bptr = &derived;
    cout << "bptr points to derived class object" << endl;
    // Early binding because compiler already knows that the show() method is there in base class
    bptr->show();

    return 0;
}