#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    if(a == 0 || b ==0 || c==0)
        cout << 0 << endl;

    else
    {
        int max_side(0);
        int arr_[3] = {a, b, c};
        int max_idx, short_sides(0);

        for(int i=0; i<3; i++)
        {
            if(max_side < arr_[i])
            {
                max_side = arr_[i];
                max_idx = i;
            }
        }

        for(int i=0; i<3; i++)
        {
            if(i != max_idx)
            {
                short_sides += arr_[i];
            }
        }

        if (max_side >= short_sides)
        {
            max_side = short_sides -1;
        }

        cout << max_side + short_sides << endl;
    }

    return 0;
}