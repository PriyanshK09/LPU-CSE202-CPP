#include <iostream>
#include <string>

using namespace std;

int main() {
    int price;
    string material, chairType;
    char type, hasShelves;

    // Input
    cin >> price >> material >> type;

    // Output price and material
    cout << "Price: $" << price << endl;
    cout << "Material: " << material << endl;

    // Check type and output accordingly
    if (type == 'C') {
        chairType = "Standard";
        cout << "Chair Type: " << chairType << endl;
    } else if (type == 'T') {
        // Do nothing
    } else if (type == 'B') {
        cin >> hasShelves;
        if (hasShelves >= '0' && hasShelves <= '9') {
            cout << "Number of Shelves: " << hasShelves << endl;
        } else {
            cout << "Invalid type!" << endl;
            return 0;
        }
    } else {
        cout << "Invalid type!" << endl;
        return 0;
    }

    return 0;
}
