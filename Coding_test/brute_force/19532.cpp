#include <iostream>

using namespace std;

int main()
{
    double a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    for(int i=-999; i <1001; i++)
        for(int j=-999; j<1001; j++)
            if(a*i+b*j-c == 0 && 0 == d*i + e*j -f)
            {
                cout << i << " " << j << endl;
                break;
            }    
            
    return 0;
}