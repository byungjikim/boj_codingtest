#include <iostream>

using namespace std;

int main()
{
    int arr_1[9], arr_2[9], arr_3[9], arr_4[9], arr_5[9], arr_6[9], arr_7[9], arr_8[9], arr_9[9];
    int *arr_basket[9] = {arr_1, arr_2, arr_3, arr_4, arr_5, arr_6, arr_7, arr_8, arr_9};
    int max(0);
    int max_row(0);
    int max_column(0);

    for(int i=0; i<9; i++)
    {
        for (int j=0; j<9; j++)
        {
            cin >> arr_basket[i][j];
            if (arr_basket[i][j] > max)
            {
                max = arr_basket[i][j];
                max_row = i;
                max_column = j;
            }
        }
    }

    cout << max << endl;
    cout << max_row+1 << " " << max_column+1 << endl;

    return 0;
}