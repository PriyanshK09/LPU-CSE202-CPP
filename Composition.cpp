#include <iostream>
using namespace std;

class engine
{
    public:
        engine()
        {
            cout << "I am engine" << endl;
        }
        ~engine()
        {
            cout << "Engine destroyed" << endl;
        }
};

class car
{
    public:
        engine eng; //Engine is part of car
        car()
        {
            cout << "This is car" << endl;
        }
        ~car()
        {
            cout << "Car destroyed" << endl;
        }
};

int main()
{
    car c;
    return 0;
}