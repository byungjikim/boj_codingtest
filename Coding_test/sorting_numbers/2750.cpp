#include <iostream>

using namespace std;


void sort_rising(int* arr, int num_arr)
{
    for(int i=0; i<num_arr; i++)
    {
        int min=1001;
        int idx;
        int j;
        for(j=i; j<num_arr; j++)
        {
            if(min > arr[j])
            {
                min = arr[j];
                idx = j;
            }   
        }
        arr[idx] = arr[i];
        arr[i] = min;
    }
}


int main()
{
    int num_digits;
    cin >> num_digits;

    int* num_arr = new int[num_digits];

    for(int i=0; i<num_digits; i++)
    {
        cin >> num_arr[i];
    }

    sort_rising(num_arr, num_digits);

    for(int i=0; i<num_digits; i++)
    {
        cout << num_arr[i] << endl;
    }

    return 0;
}


