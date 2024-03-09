#include <iostream>

using namespace std;

int main()
{
    int num, target, sum(0);
    cin >> num >> target;

    int* num_arr = new int[num];
    for (int i=0; i<num; i++)
    {
        cin >> num_arr[i];
    }

    for(int i=0; i<num-2; i++)
    {
        for(int j=i+1; j<num-1; j++)
        {
            for(int k=j+1; k<num; k++)
            {
                int temp = num_arr[i] + num_arr[j] + num_arr[k];
                if(temp <= target && sum < temp)
                    sum = num_arr[i] + num_arr[j] + num_arr[k];
            }
        }
    }

    cout << sum << endl;

    delete[] num_arr;

    return 0;
}