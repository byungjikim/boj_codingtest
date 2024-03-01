#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // A: 65 ----- 0: 48
    int num, num_formation, result(0), cnt(0);
    cin >> num >> num_formation;

    int temp = num;
    while(temp)
    {
        temp /= num_formation;
        cnt++;
    }
    // cout << cnt << endl;
    for(int i=0; i<cnt; i++)
    {
        int remainder, val;
        remainder = num % (int)(pow(num_formation, cnt-i-1));
        val = num / (int)(pow(num_formation, cnt-i-1));
        num = remainder;

        // cout << i << " " << val << " " << num << endl;
        if (val>=0 && val<10)
        {
            cout << (char)(val+48);
        }
        else if (val>=10 && val<36)
        {
            cout << (char)(val+55);
        }
    }
    cout << endl;
    return 0;
}