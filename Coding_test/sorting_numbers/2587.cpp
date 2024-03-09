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
    int* num_arr = new int[5];

    cin >> num_arr[0] >> num_arr[1] >> num_arr[2] >> num_arr[3] >> num_arr[4];

    int mean(0), central_num;

    for (int i=0; i<5; i++)
        mean += num_arr[i];
    
    mean /=5;

    sort_rising(num_arr, 5);

    central_num = num_arr[2];

    cout << mean << endl;
    cout << central_num << endl;


    return 0;
}