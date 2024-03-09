#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(string& a, string& b)
{
    if (a.length() != b.length())
        return a.length() < b.length();
    
    else
        return a < b;
    
}
int main()
{
    int n;
    vector <string> v;

    cin >> n;

    for(int i=0; i<n; i++)
    {   
        string s;
        cin >> s;
        v.push_back(s);
        // cin >> v[i];
    }

    sort(v.begin(), v.end(), comp);
    
    for(int i=0; i<n; i++)
    {
        if(v[i] == v[i+1])
            {}
        else 
            cout << v[i] << "\n";
    }


    return 0;
}