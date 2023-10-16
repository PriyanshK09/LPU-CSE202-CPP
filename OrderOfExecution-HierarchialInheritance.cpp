#include <iostream>
using namespace std;

class employee
{
    public:
        employee()
        {
            cout << "Constructor of employee class" << endl;
        }
        ~employee()
        {
            cout << "Destructor of employee class" << endl;
        }
};

class company
{
    public:
        employee *emp;
        // Company HAS-A employee

        company(employee *emp)
        {
            this->emp = emp;
            cout << "Constructor of company class" << endl;
        }
        ~company()
        {
            cout << "Destructor of company class" << endl;
        }
};

int main()
{
    employee *e1 = new employee();
    {
        company c1(e1);
    }
    // delete emp
}

// Explanation : 
// 1. When we create an object of company class, the constructor of company class is called.
// 2. The constructor of company class takes an employee object as an argument.
// 3. So, the constructor of company class is called first and then the constructor of employee class is called.
// 4. When the object of company class goes out of scope, the destructor of company class is called first and then the destructor of employee class is called.
// 5. So, the order of execution is Hierarchial Inheritance.