#include <iostream>

using namespace std;

int main()
{
    int a, b,c;
    cin >> a >> b >> c;

    if (a+b+c != 180)
    {
        cout << "Error" << endl;
        return 0;
    }

    else if(a == b && b == c)
    {
        cout << "Equilateral" << endl;
        return 0;
    }

    int arr_[3] = {a, b, c};
    int flag(0);
    for(int i=0; i<3; i++)
    {
        for(int j=i+1; j<3; j++)
        {
            if(arr_[i] == arr_[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag==1)
        {
            cout << "Isosceles" << endl;
            break;
        }
    }

    if (flag ==0)
        cout << "Scalene" << endl;

    return 0;
}