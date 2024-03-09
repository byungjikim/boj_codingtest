#include <iostream>

using namespace std;

void sort_rising(int* arr, int num_arr)
{
    for(int i=0; i<num_arr; i++)
    {
        int min=10001;
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
    int n_score, n_prize;
    cin >> n_score >> n_prize;

    int* score_arr = new int[n_score];

    for(int i=0; i<n_score; i++)   
        cin >> score_arr[i];

    sort_rising(score_arr, n_score);

    cout << score_arr[n_score - n_prize] << endl;


    return 0;
}