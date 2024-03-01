#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int i;
    cin >> s;
    cin >> i;

    for (int j=0; j<s.length(); j++)
    {
        if (j+1 == i)
            cout << s[j] << endl;
    }
    // cout << s.length() << endl;

    return 0;
}