#include <iostream>

using namespace std;

int main()
{
    int cnt;
    float adjust_mean;
    int max =0;
    cin >> cnt;

    int array_m[cnt];

    for(int i=0; i<cnt; i++)
    {
        int a;
        cin >> a;
        array_m[i] = a;
        if (max < a)
            max = a;
    }

    for(int j=0; j< cnt; j++)
        adjust_mean += (float)array_m[j] * 100 / (max * cnt);
    
    cout << adjust_mean << endl;
    return 0;
}