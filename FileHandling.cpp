#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char s[30];
    ofstream of("result.txt");
    of<<"Welcome to C++ Programming";
    of.close();

    cout << "Data Saved to File" << endl;

    ifstream ifs("result.txt");
    ifs >> s;
    cout << s << endl;
    ifs.close();

    return 0;
}