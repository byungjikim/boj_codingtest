#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    int first_pos = b%10;
    // cout << first_pos<< " ";
    int second_pos = b%100 - first_pos;
    // cout << second_pos << " ";
    int third_pos = b - first_pos - second_pos;
    // cout << third_pos << endl;

    cout << a* first_pos << endl;
    cout << a* second_pos / 10 << endl;
    cout << a* third_pos / 100 << endl;
    cout << a*b << endl;

    return 0;
}