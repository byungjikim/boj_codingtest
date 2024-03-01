#include <iostream>

using namespace std;

void sort_arr(int (&arr)[9])
{
    int temp;
    // int sorted_arr[];
    for (int i=0; i< sizeof(arr) / sizeof(arr[0]); i++)
    {
        for (int j=i+1; j < sizeof(arr) / sizeof(arr[0]); j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // return arr;
}
int main()
{
    int a, b, c, d, e, f, g, h, q;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    cin >> f;
    cin >> g;
    cin >> h;
    cin >> q;

    int sum = a+b+c+d+e+f+g+h+q;
    int idx_i, idx_j;
    int arr[9] = {a, b, c, d, e, f, g, h, q};
    sort_arr(arr);

    for (int i=0; i<9; i++)
    {
        for(int j=i+1; j<9; j++)
        {
            if (sum - arr[i] -arr[j] == 100)
            {
                idx_i = i;
                idx_j = j;
                break;
            }

        }
    } 
    // cout << idx_i << " " << idx_j << endl;

    for (int k=0; k<9; k++)
    {
        if (k==idx_i || k==idx_j)
            continue;

        else
            cout << arr[k] << endl;

    }


    return 0;
}