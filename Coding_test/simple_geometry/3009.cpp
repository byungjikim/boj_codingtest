#include <iostream>

using namespace std;

struct pocket
{
    int x;
    int y;
};

int main()
{
    pocket axis[3];

    cin >> axis[0].x >> axis[0].y;
    cin >> axis[1].x >> axis[1].y;
    cin >> axis[2].x >> axis[2].y;

    int x_1,x_2,y_1,y_2;

    for(int i=0; i<3; i++)
    {
        for(int j=i+1; j<3; j++)
        {
            if (axis[i].x == axis[j].x)
            {
                x_1 = i;
                x_2 = j;
            }    

            if (axis[i].y == axis[j].y)
            {
                y_1 = i;
                y_2 = j;
            }    
        }
    }

    for(int k=0; k<3; k++)
    {
        if (k != x_1 && k!= x_2)
            cout << axis[k].x << " ";        
    }

    for(int k=0; k<3; k++)
    {
        if (k != y_1 && k!= y_2)
            cout << axis[k].y << endl;        
    }

    return 0;
}