#include <iostream>

using namespace std;

int main()
{
    long num;
    long cnt(0);
    cin >> num;
    
    num -=2;
    if(num <=0)
    {
        cout << 0 << endl << 3 << endl;
        return 0;
    }
    cnt = num * (num+1) * (num+2) / 6;
    
    cout << cnt << endl;
    cout << 3 << endl;

    return 0;
}