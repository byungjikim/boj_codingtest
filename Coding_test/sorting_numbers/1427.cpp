#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int num, size_cnt(0);
    cin >> num;

    int temp = num;
    while(temp !=0)
    {
        temp /= 10;
        size_cnt++;
    }

    int* arr = new int[size_cnt];

    for(int i=0; i<size_cnt; i++)
    {
        arr[i] = num %10;
        num /= 10;
    }

    sort(arr, arr+size_cnt, greater<int>());

    for(int i=0; i<size_cnt; i++)
        cout << arr[i];

    cout << endl;

    delete[] arr;

    return 0;
}