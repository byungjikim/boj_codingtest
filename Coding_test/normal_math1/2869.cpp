#include <iostream>

using namespace std;

int main()
{
    int a, b, v, temp, result(0);
    cin >> a >> b >> v;

    while(true)
    {
        temp = v/a;
        result += temp;
        v += -temp*a + temp*b;
        if(v-b <=0)
            break;
        v = v - a;
        result++;
        if(v<=0)
            break;
        v = v +b;
    }

    cout << result << endl;

    return 0;
}