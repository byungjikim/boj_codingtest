#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    char c_arr[num][2];

    for(int i=0; i< num; i++)
    {
        string s;
        // getline(cin, s);
        cin >> s;
        c_arr[i][0] = s[0];
        c_arr[i][1] = s[s.length()-1];
    }

    for(int j=0; j<num; j++)
    {
        cout << c_arr[j][0] << c_arr[j][1] << endl; 
    }
    
    return 0;
}