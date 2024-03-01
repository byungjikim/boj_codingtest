#include <iostream>

using namespace std;

int main()
{
    int row, column;
    cin >> row >> column;

    int a_arr[row*column];
    int b_arr[row*column];
    int c_arr[row*column];

    for(int i=0; i<row*column; i++)
    {
        cin >> a_arr[i];
    }

    for(int i=0; i<row*column; i++)
    {
        cin >> b_arr[i];
    }

    for(int i=0; i<row*column; i++)
    {
        c_arr[i] = a_arr[i] + b_arr[i];
        if (i%row == row-1)
        {
            cout << c_arr[i] << endl;
        }
        else
        {
            cout << c_arr[i] << " ";
        }
    }

    return 0;
}