#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compY(pair <int, int>& v, pair<int,int> b)
{
    if (v.second != b.second)
        return v.second < b.second;
    else
        return v.first < b.first;
}

int main()
{
    vector<pair<int, int>> v;
    int n, x, y;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> x >> y;
        v.push_back({x, y});
    }

    sort(v.begin(), v.end(),compY);
    for(int i=0; i<n; i++)
    {
        cout << v[i].first << " " << v[i].second << '\n';
    }

    return 0;
}