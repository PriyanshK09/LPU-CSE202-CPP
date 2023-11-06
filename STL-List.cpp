#include <iostream>
#include <list>
using namespace std;

void display(list <int> &l)
{
    list<int>::iterator p;
    for (p=l.begin();p!=l.end();p++)
        cout << *p << " ";
}

int main()
{
    list<int> list1;
    list<int> list2(5);

    for(int i=0;i<3;i++)
        list1.push_back(i);
    cout << "\n Displaying first list: ";
    display(list1);
    list<int>::iterator p;

    for(p=list2.begin();p!=list2.end();p++)
        *p = 1;
    cout << "\n Displaying second list: ";
    display(list2);

    cout << "\n Pusing elements in front of first list: ";
    list1.push_front(100);
    display(list1);

    cout << "\n Popping elements from front of second list: ";
    list2.pop_front();
    display(list2);

    cout << "\n Sorting first list: ";
    list1.sort();
    display(list1);

    cout << "\n Sorting second list: ";
    list2.sort();
    display(list2);

    cout << "\n Merging both lists: ";
    list1.merge(list2);
    display(list1);

    cout << "\n Reversing the list: ";
    list1.reverse();
    display(list1);

    return 0;
}