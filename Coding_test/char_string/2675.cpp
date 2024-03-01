#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num;
    cin >> num;

    int repeat_arr[num];
    string s_arr[num];

    for(int i=0; i< num; i++)
    {
        string s;
        int repeat;

        cin >> repeat >> s;
        repeat_arr[i] = repeat;
        s_arr[i] = s;
    }

    for (int r=0; r <num; r++)
    {
        for(int j=0; j< s_arr[r].length(); j++)
            for(int k=0; k<repeat_arr[r]; k++)
                cout << s_arr[r][j];
            cout << endl;
    }
    
    return 0;
}