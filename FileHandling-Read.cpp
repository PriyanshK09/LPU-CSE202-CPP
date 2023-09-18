#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream of("result.txt");
    string line;
    // Without Loop
    getline(of, line);
    cout << line << endl;
    
    // With Loop
    // while (getline(of, line))
    // {
    //     cout << line << endl;
    // }

    return 0;
}