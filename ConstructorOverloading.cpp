// Overloading of Constructors means :-
// 1. Same name of Constructors
// 2. Different number of parameters
// 3. Different type of parameters

// More than one constructor in same class, but with different parameters
// #include <iostream>
// #include <string>
// #include <conio.h>
// using namespace std;

// class Person {
// public:
//     string name;
//     int age;
//     Person(string n, int a) {
//         name = n;
//         age = a;
//     }
//     Person() {
//         name = "noname";
//         age = 0;
//     }
// };

// int main() {
//     Person person1("David", 21);
//     Person person2;
//     cout << person1.name << " " << person1.age << endl;
//     cout << person2.name << " " << person2.age << endl;
//     return 0;
// }

// Constructor Overloading using only a single object
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

class Person {
public:
    string name;
    int age;
    Person(string n, int a) {
        name = n;
        age = a;
    }
    Person() {
        name = "noname";
        age = 0;
    }
};

int main() {
    Person person1("David", 21);
    cout << person1.name << " " << person1.age << endl;
    // Another parameter in same object
    person1 = Person("John", 25);
    cout << person1.name << " " << person1.age << endl;

    Person person2;
    cout << person2.name << " " << person2.age << endl;

    return 0;
}

// Constructor Overloading using only a single object