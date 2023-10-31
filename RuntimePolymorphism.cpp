// Write a program to add a User friendly menu that prompts the user to choose a color to paint on the canvas.
// The user can input either 'R' or 'r' to select the Red color or 'B' or 'b' to select the Blue Color.
// Write a Program to implement runtime Polymorphism. The program should define a base class "Color" with a Virtual Function "paint" and
// two derived classes "RedPaint" and "BluePaint" that override the "paint()" function to paint with the chosed color. 
// Input Format : The input consists of a single character representing the color to paint where "R" or "r" represents Red and "B" or "b" represent Blue
// Output Format : The program should output the message "I'm Painting with Red Color." if the user inputs "R" or "r", or "I'm Painting with Blue Color."
// If the user inputs "B" or "b". If the user inputs any other character, the program should output "Invalid choice!" and terminate

#include <iostream>
using namespace std;

class Color {
public:
    virtual void paint() = 0;
};

class RedPaint : public Color {
public:
    void paint() {
        cout << "I'm Painting with Red Color." << endl;
    }
};

class BluePaint : public Color {
public:
    void paint() {
        cout << "I'm Painting with Blue Color." << endl;
    }
};

int main() {
    char choice;
    cout << "Enter 'R' or 'r' to select Red color or 'B' or 'b' to select Blue color: ";
    cin >> choice;

    Color *color;
    if (choice == 'R' || choice == 'r') {
        color = new RedPaint();
    }
    else if (choice == 'B' || choice == 'b') {
        color = new BluePaint();
    }
    else {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    color->paint();

    delete color;

    // Explanation :-
    // Color *color; || Pointer to the base class
    // color = new RedPaint(); || Pointer to the derived class
    // new is used to allocate memory for the derived class
    // color->paint(); || Calls the paint() function of the derived class
    // delete color; || Deletes the memory allocated for the derived class
    // color = new BluePaint(); || Pointer to the derived class
    // color->paint(); || Calls the paint() function of the derived class
    // delete color; || Deletes the memory allocated for the derived class

    return 0;
}
