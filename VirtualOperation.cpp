// You are required to implement a calculator application that allows user to perform arithematic operation on two numbers.
// The application should have a base class called OperationBase that declares four pure virtual functions for addition(), subtraction(), multiplication() and division().
// This base class will act as an interface for the calculator's operations.
// Next, you need to create a derived class called operationsDerived, that inherits from OperationBase class. This derived class should implement all the four arithematic operations using two private integer member variables a & b.
// The main() function should create an object of operationsDerived class and prompt the user to enter two numbers. Then it should perform each operation and display the results.

#include <iostream>
using namespace std;

class OperationBase
{
public:
    virtual void addition() = 0;
    virtual void subtraction() = 0;
    virtual void multiplication() = 0;
    virtual void division() = 0;
};

class operationsDerived : public OperationBase
{
private:
    int a, b;

public:
    void get()
    {
        cin >> a >> b;
    }
    void addition()
    {
        cout << "Addition: " << a + b << endl;
    }
    void subtraction()
    {
        cout << "Subtraction: " << a - b << endl;
    }
    void multiplication()
    {
        cout << "Multiplication: " << a * b << endl;
    }
    void division()
    {
        cout << "Division: " << a / b << endl;
    }
};
    

int main()
{
    operationsDerived object;
    cout << "Enter two numbers: ";

    object.get();
    object.addition();
    object.subtraction();
    object.multiplication();
    object.division();
    return 0;
}