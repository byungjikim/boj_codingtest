#include <iostream>
#include <list>

using namespace std;

int main()
{
    int a, b;
    list<int> n_list;

    while(true)
    {
        cin >> a >> b;
        if (a == 0 && b==0)
            break;

        if(b%a ==0)
            n_list.push_back(0);

        else if(a%b ==0)
            n_list.push_back(1);

        else
            n_list.push_back(2);
    }
    
    while(!n_list.empty())
    {
        int num = n_list.front();
        
        if (num == 0)
            cout << "factor" << endl;

        else if (num == 1)
            cout << "multiple" << endl;
            
        else if (num == 2)
            cout << "neither" << endl;

        n_list.pop_front();
    }

    return 0;
}