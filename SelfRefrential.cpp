#include <iostream>
using namespace std;

class s
{
    int rollNo;
    char name[10];
    int age;
    s *next;
    public:
        s()
        {
            next = NULL;
        }

    void getdata()
    {
        cout << "Enter roll no: ";
        cin >> rollNo;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void link(s *t)
    {
        next = t;
    }

    void print()
    {
        s *p;
        p = this;
        while(p != NULL)
        {
            cout << "Roll No = " << p->rollNo << "\n Name = " << p->name << "\n Age = " << p->age << endl;
            p = p->next;
        }
    }
};

int main()
{
    s o1, o2, o3;
    o1.getdata();
    o2.getdata();
    o3.getdata();
    o1.link(&o2);
    o2.link(&o3);
    o1.print();
}