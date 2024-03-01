#include <iostream>

using namespace std;

int main()
{
    string gfg;
    // char gfg[101];
    cin.ignore();
    getline(cin, gfg);
    // cin.get(gfg, 101);    
    cout << "output: " <<  gfg << endl;

    return 0;
}