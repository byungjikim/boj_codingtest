#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    if (b<45)
    {
        int gap = b - 45;
        // cout << gap << endl;
        b = 60 + gap;
        if (a==0)
            a= 23;
        else
            a = a-1;
    }
    else
    {
        b= b-45;
    }
    
    cout << a << " " << b << endl;

    return 0;
}