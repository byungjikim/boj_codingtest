#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int cnt(0);

    for(int i=0; i<s.length(); i++)
    {
        if(s[i] != s[s.length()-i-1])
        {
            cout << 0 << endl;
            break;
        }
        else
            cnt++;    
    }
    // cout << cnt << endl;
    if (cnt == s.length())
        cout << 1 << endl;

    return 0;
}