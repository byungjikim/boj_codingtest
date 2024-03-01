#include <iostream>
#include <list>

using namespace std;

int main()
{
    int p, q;
    list<int> pocket;
    cin >> p >> q;

    for(int i=1; i<=p; i++)
    {
        if (p%i == 0)
            pocket.push_back(i);
    }

    for(int j=1; j<q; j++)
    {
        if(pocket.empty())
            break;
        pocket.pop_front();
    }    
    
    if(pocket.empty())
        cout << 0 << endl;
    else
        cout << pocket.front() << endl;

    return 0;
}