#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    /*
    2 - 2 + 1 - 2 + 1 + 2 - 2 + 1 + 2 + 4 - 2+ 1 + 2 + 4 + 8 
    */

    int n_repeat;
    cin >> n_repeat;

    int result = 2;

    result = (result+ (int)pow(2, n_repeat)-1) * (result+ (int)pow(2, n_repeat)-1);
    cout << result << endl;

    return 0;
}