#include <iostream>

using namespace std;

int main()
{
    /*
    1: facing line - 6 (2-7)
    2: facing line - 12 (8-19)
    3: facing line - 18 (20-37)
    */

    int result(1);
    int n_room, cnt(0);
    cin >> n_room;

    while(true)
    {
        if(n_room<=result)
        {
            cnt++;
            break;
        }
        else
        {
            cnt++;
            result += 6*cnt;
        }
    }

    cout << cnt << endl;

    return 0;
}