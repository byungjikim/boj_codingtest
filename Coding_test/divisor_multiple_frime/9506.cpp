#include <iostream>
#include <list>

using namespace std;

int main()
{
    int p;
    list<int> pocket;
    
    while(true)
    {
        cin >> p;
        if(p==-1)
            break;
        pocket.push_back(p);  
    }

    while(!pocket.empty())
    {
        int num = pocket.front();
        pocket.pop_front();

        list<int> temp, temp2;
        for(int i=1; i<num; i++)
        {
            if (num % i == 0)
                temp.push_back(i);
        }

        temp2 = temp;
        int total(0);

        while(!temp2.empty())
        {
            total += temp2.front();
            temp2.pop_front();
        }

        if(total == num)
        {
            cout << num << " = ";
            while(true)
            {
                cout << temp.front();
                temp.pop_front();

                if(temp.empty())
                    break;
                cout << " + ";
            }
            
            cout << endl;
        }

        else
        {
            cout << num << " is NOT perfect." << endl;
        }
    }

    return 0;
}