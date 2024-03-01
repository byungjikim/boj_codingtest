#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x,y,w,h;
    cin >> x >> y >> w >> h;

    int x_gap = min(abs(x-w),abs(x));
    int y_gap = min(abs(y-h),abs(y));
    
    cout << min(x_gap, y_gap) << endl;

    return 0;
}