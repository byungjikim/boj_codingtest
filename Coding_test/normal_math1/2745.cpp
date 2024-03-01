#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    // A: 65 ----- 0: 48
    string num;
    int num_formation, result(0);
    cin >> num >> num_formation;
    // num = "0";
    // cout << (int)num[0] << endl;

    for(int i=0; i<num.length(); i++)
    {
        if((int)num[i]>=48 && (int)num[i]<58)
        {
            result += ((int)num[i] - 48) * pow(num_formation,num.length()- i-1);
        }

        else if((int)num[i]>=65 && (int)num[i]<91)
        {
            result += ((int)num[i] - 55) * pow(num_formation,num.length()- i-1);
        }
    }
    // cout << (int)'Z' << endl;
    cout << result << endl;

    return 0;
}