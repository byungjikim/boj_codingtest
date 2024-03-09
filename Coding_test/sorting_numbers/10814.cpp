#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Member
{
    int age;
    int idx;
    string name;
};

bool comp(Member& a, Member& b)
{
    if(a.age != b.age)
        return a.age < b.age;
    
    else
        return a.idx < b.idx;
}

int main()
{
    int n;
    vector <Member> v;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        int age;
        string name;
        cin >> age >> name;
        v.push_back({age, i, name});
    }

    sort(v.begin(), v.end(), comp);

    for(int i=0; i<n; i++)
    {
        cout << v[i].age << " " << v[i].name << '\n';
    }

    return 0;
}