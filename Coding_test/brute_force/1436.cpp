#include <iostream>

using namespace std;

int main()
{
    // 666 ~ 5666 / 6660~6669 / 7666 8666 9666  
    //  / 
    // 10666 ~ 15666 / 16660~16669 / 17666 18666 19666 
    // 10으로 나눴을 때 6이 연속 3번 나와야됨.
    // 
    int num, start_n(666), tri6_cnt(0);
    cin >> num;

    while(true)
    {
        int temp = start_n;
        int cnt = 0;
        while(temp>1)
        {
            if(temp%10 == 6)
            {
                cnt++;
                if(cnt==3)
                {
                    tri6_cnt++;
                    break;
                }
            }

            else
                cnt = 0;

            temp /= 10;
        }
        if(num == tri6_cnt)
            break;
        start_n++;
    }

    cout << start_n << endl;

    return 0;
}