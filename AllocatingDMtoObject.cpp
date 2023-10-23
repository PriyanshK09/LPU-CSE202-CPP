#include <iostream>
using namespace std;

class sample {
    public:
    sample() {
        cout << "Constructor called" << endl;
    }
    ~sample() {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    int n;
    cout << "Enter the number of objects: ";
    cin >> n;
    sample* obj = new sample[n]; // Allocating memory to n objects where obj is a pointer to the first object
    delete[] obj; // Deleting the memory allocated to the n objects
    return 0;
}