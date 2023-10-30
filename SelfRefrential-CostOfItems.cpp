// The store offers main categories of items : Wooden Items and Electronics.
// As part of the system you are required to create a program that calculates
// the Total Amount a customer needs to pay based on the type and quantity.

// Item Type (Abstract Base Class)
// This is an abstract base class that defines pure virtual function calculateAmount() which calculates the total amount of the items to be purchased.
// It acts as a blueprint for the derived classes.
// Wooden (Derived from Item Type)
// This class represents wooden items available in the store. It has two private data members : 
// numberOfItems (representing the quantity of the item) and cost (representing the cost of each item).
// The class implements the calculateAmount() function by multiplying the numberOfItems with the cost.
// Electronics (Derived from Item Type)
// This class represents electronic items available in the store. It has one private data members :
// cost (representing the cost of each item). The class implements the calculateAmount() function by applying a 20% discount on the cost of the item.

// Input Format :
// First line of input consists of an integer representing the choice
// If choice is 1, enter the numbers of items and their cost
// If choice is 2, enter the cost

#include <iostream>
using namespace std;

class ItemType
{
public:
    virtual void calculateAmount() = 0;
};

class Wooden : public ItemType
{
private:
    int numberOfItems;
    int cost;

public:
    Wooden(int numberOfItems, int cost)
    {
        this->numberOfItems = numberOfItems;
        this->cost = cost;
    }
    void calculateAmount()
    {
        cout << "Total Amount : " << numberOfItems * cost << endl;
    }
};

class Electronics : public ItemType
{
private:
    int cost;

public:
    Electronics(int cost)
    {
        this->cost = cost;
    }
    void calculateAmount()
    {
        cout << "Total Amount : " << cost - (cost * 0.2) << endl;
    }
};

int main()
{
    int choice, numberOfItems, cost;
    cin >> choice;
    if (choice == 1)
    {
        cin >> numberOfItems >> cost;
        Wooden w(numberOfItems, cost);
        w.calculateAmount();
    }
    else if (choice == 2)
    {
        cin >> cost;
        Electronics e(cost);
        e.calculateAmount();
    }
    else
    {
        cout << "Invalid Input" << endl;
    }
    return 0;
}