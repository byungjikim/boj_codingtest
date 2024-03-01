#include <iostream>

using namespace std;

int add(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b;
}

int mul(int a, int b)
{
    return a*b;
}

float divide(int a, int b)
{
    return a/b;
}

float mod(int a, int b)
{
    return a%b;
}

int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    cout << add(a,b) << endl;
    cout << sub(a,b) << endl;
    cout << mul(a,b) << endl;
    cout << divide(a,b) << endl;
    cout << mod(a,b) << endl;

    return 0;
}