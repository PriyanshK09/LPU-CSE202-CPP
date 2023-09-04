#include <iostream>
using namespace std;
class THuman
{
public:
    string name;
    int age,height;
    void get()
    {
        cin>>this->name>>this->age>>this->height;
    }
    void put()
    {
        cout<<this->name<<" "<<this->age<<" "<<this->height<<endl;
    }
};

int main()
{
    THuman *worker[1000];
    for(int i=0;i<2;i++)
    {
        worker[i]=new THuman;
    }
    for(int i=0;i<2;i++)
    {
        worker[i]->get();
    }
    for(int i=0;i<2;i++)
    {
        worker[i]->put();
    }
    for(int i=0;i<2;i++)
    {
        delete worker[i];
    }
}