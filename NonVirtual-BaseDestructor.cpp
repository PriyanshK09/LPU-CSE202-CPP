// Non Virtual base destructor {Problem = Derived Class Destructor not getting Called}

#include <iostream>
using namespace std;

class base{
    public:
        base()
        {
            cout<<"Constructing base \n";
        }
        ~base()
        {
            cout<<"Destructing base \n";
        }
};

class derived:public base{
    public:
        derived1()
        {
            cout<<"Constructing derived \n";
        }
        ~derived1()
        {
            cout<<"Destructing derived \n";
        }
};

int main()
{
    base *b = new derived1;
    delete b;
    return 0;
}