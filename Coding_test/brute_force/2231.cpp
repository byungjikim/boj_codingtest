#include <iostream>

using namespace std;

int main()
{
    int num, cnt(0), start_num, result(0);
    cin >> num;

    int temp =num;
    
    while(true)
    {
        temp = temp/10;
        if(temp <1)
            break;
        cnt++;
    }
    // cout << cnt << endl;

    if (cnt>=2)
        start_num = num-54;
    else
        start_num = 0;
    // cout << start_num << endl;
    int count(0);
    for(int i=start_num; i<num; i++)
    {
        int sum(i);
        int copy_i = i;

        for(int j=0; j<=cnt; j++)
        {
            sum += copy_i % 10;
            copy_i /= 10; 
        }

        if (sum == num)
        {
            // cout << i << endl;
            result = i;
            break;
        }
    }
    if (result)
        cout << result << endl;
    else
        cout << 0 << endl;

    return 0;
}