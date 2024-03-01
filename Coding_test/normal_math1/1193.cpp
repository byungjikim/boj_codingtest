#include <iostream>

using namespace std;

int main()
{
    int nth_fraction,temp, cnt(1), val, remainder(0), layer(0);
    cin >> nth_fraction;
    temp = nth_fraction;

    while(true)
    {
        if(nth_fraction > cnt*(cnt+1)/2)
            cnt++;     
        
        else
        {    
            temp -= cnt*(cnt-1)/2;
            break;

        }
    }

    if(cnt%2==1)
    {
        val = temp;
        remainder = cnt +1 - temp;
        cout << remainder<<  '/' << val << endl;
    }
    else
    {
        remainder = temp;
        val = cnt +1 - remainder;
        cout << remainder<<  '/' << val << endl;
    }

    return 0;
}