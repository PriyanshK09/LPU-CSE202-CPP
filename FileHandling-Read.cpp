#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream rf("result.txt");
    string line;
    // Without Loop
    getline(rf, line);
    cout << line << endl;

    // With Loop
    // while (getline(of, line))
    // {
    //     cout << line << endl;
    // }

    return 0;
}