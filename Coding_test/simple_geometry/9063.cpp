#include <iostream>

using namespace std;

struct area 
{
    int x;
    int y;
};

int main()
{
    int n, x_l(10001), x_h(-10001), y_l(10001), y_h(-10001);
    cin >> n;

    if (n<=1)
        {
            cout << 0 << endl;
            return 0;
        }
        
    area a_list[n];

    for(int i=0; i<n; i++)
        cin >> a_list[i].x >> a_list[i].y;        
    
    for (int i=0; i<n; i++)
    {
        x_l = min(a_list[i].x, x_l);
        x_h = max(a_list[i].x, x_h);
        y_l = min(a_list[i].y, y_l);
        y_h = max(a_list[i].y, y_h);
    }

    int result = abs(x_l - x_h) * abs(y_l - y_h);

    cout << result << endl;
    
    return 0;
}