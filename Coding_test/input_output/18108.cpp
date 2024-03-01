// 2541 -> 1998
#include <iostream>

using namespace std;

int main()
{
    int y;
    cin >> y;
    
    int gap = 2541 - 1998;
    if (y<= 3000 && y>=1000)
        cout << y-gap << endl;

    return 0;
}