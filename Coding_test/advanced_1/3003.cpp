#include <iostream>

using namespace std;


// 16
// 1 1 2 2 2 8
int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int arr_[6] = {a, b, c, d, e, f};
    
    for (int x=0; x<2; x++)
    {
        arr_[x] = 1-arr_[x];
    }
    
    for (int x=2; x<5; x++)
    {
        if (arr_[x] != 2)
            arr_[x] = 2-arr_[x];
        else
            arr_[x] = 0;
    }

    for (int x=5; x<6; x++)
    {
        if (arr_[x] != 8)
            arr_[x] = 8-arr_[x];
        else
            arr_[x] = 0;
    }

    for (int i=0; i<6; i++)
    {
        cout << arr_[i] << " ";
    }
    cout << endl;

    return 0;
}