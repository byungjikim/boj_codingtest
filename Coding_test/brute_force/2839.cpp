#include <iostream>
#include <list>

using namespace std;


int main()
{
    int num;
    cin >> num;

    int max_bag = num/3;
    int min_bag = num/5;
    list<int> num_baglist;

    if(num% 5 ==0)
    {
        cout << min_bag << endl;
        return 0;        
    }

    if(num %3 ==0)
        num_baglist.push_back(max_bag);

    
    for(int i=0; i<=max_bag; i++)
    {
        for(int j=0; j<=max_bag; j++)
            if(3*i + 5*j == num)
            {
                num_baglist.push_back(i+j);
            }
    }
    
    int min(5000);

    while(!num_baglist.empty())
    {
        if(min > num_baglist.front())
            min = num_baglist.front();

        num_baglist.pop_front();
    }

    if (min == 5000)
        cout << -1 << endl;
    else
        cout << min << endl;



    return 0;
}