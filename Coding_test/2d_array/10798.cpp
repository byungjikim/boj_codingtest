#include <iostream>

using namespace std;

int main()
{
    string s_arr[5];
    int max_length(0);

    for(int i=0; i<5; i++)
        getline(cin, s_arr[i]);

    for(int i=0; i<5; i++)
    {
        if (max_length < s_arr[i].length())
            max_length = s_arr[i].length();    
    }

    for(int i=0; i<max_length; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(s_arr[j][i] && i < s_arr[j].length())
                cout << s_arr[j][i];
        }
    }

    cout << endl;

    return 0;
}