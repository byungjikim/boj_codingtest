#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int val = a*d + b;
    if (val> c*d)
        cout << 0 << endl;

    else
        cout << 1 << endl;
    
    return 0;
}