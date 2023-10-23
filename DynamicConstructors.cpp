#include <iostream>
using namespace std;

class example1
{
    const char *ptr;
public:
    // Default Constructor
    example1()
    {
        // Allocating Memory at Run Time
        ptr = new char[8];
        ptr = "Dynamic";
    }
    void show()
    {
        cout << ptr << endl;
    }
};

int main()
{
    example1 *ptr = new example1();
    ptr->show();
}
