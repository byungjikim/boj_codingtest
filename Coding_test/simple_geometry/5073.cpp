#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> flags;
    // Equilateral =1
    // Isosceles = 2
    // Scalene = 3
    // Invalid = 4
    int cnt(0);
    while(true)
    {
        int tri[3];
        cin >> tri[0] >> tri[1] >> tri[2];

        if(tri[0]==0 && tri[1]==0 && tri[2]==0)
            break;
        
        if(tri[0]==0 || tri[1]==0 || tri[2]==0)
        {
            flags.push_back(4);
            continue;
        }

        else if(tri[0] == tri[1] && tri[1] == tri[2])
        {
            flags.push_back(1);
            continue;
        }

        int two_sides(0);
        bool flag = false;
        bool skip_flag = false;

        for(int i=0; i<3; i++)
        {
            two_sides =0;
            for(int j=0; j<3; j++)
            {
                if (i != j)
                {   
                    two_sides += tri[j];

                    if(tri[i] == tri[j])
                        flag = true;
                }
            }

            if(two_sides <= tri[i])
            {
                flags.push_back(4);
                skip_flag = true;
                break;
            }
        }
        if (skip_flag)
            {}
        else if (flag)
            flags.push_back(2);
        else
            flags.push_back(3);
            
    }

    while(!flags.empty())
    {
        if(flags.front() == 1)
            cout << "Equilateral" << endl;

        else if (flags.front() == 2)
            cout << "Isosceles" << endl;
        
        else if (flags.front() == 3)
            cout << "Scalene" << endl;

        else if (flags.front() ==4)
            cout << "Invalid" << endl;

        flags.pop_front();
    }
    

    return 0;
}