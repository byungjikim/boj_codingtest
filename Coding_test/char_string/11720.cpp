#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num, sum(0);
    string a;

    cin >> num >> a;
    // cout << a << endl;

    for (int i=0; i<a.length(); i++)
    {
        sum += (int)a[i] - 48;
        // cout << (int)a[i] - 48 << endl;
    }
    cout << sum << endl;
}