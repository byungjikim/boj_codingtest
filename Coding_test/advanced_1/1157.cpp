#include <iostream>

using namespace std;

int main()
{
    // 대문자 = 소문자 - 32
    // 알파벳 개수: 26개
    // 대문자 시작 / 끝: 65 90
    // 소문자 시작 / 끝: 97 122
    string s;
    cin >> s;
    // s = "zZ";
    // cout << (int) s[0]  << " " << (int) s[1] << endl;

    int alpha_arr[26];

    for(int i=0; i<26; i++)
        alpha_arr[i] = 0;

    for(int j=0; j<s.length(); j++)
    {
        if((int)s[j]>=65 && (int)s[j]<=90)
        {
            alpha_arr[(int)s[j]-65]++;
            // cout << alpha_arr[(int)s[j]-65] << " " << s[j] << endl;
        }

        else if((int)s[j]>=97 && (int)s[j]<=122)
        {
            alpha_arr[(int)s[j]-97]++;
            // cout << alpha_arr[(int)s[j]-97] << " " << s[j] << endl;
        }   

    }
    int max =0;
    int idx;
    for(int n=0; n<26; n++)
    {
        if (max < alpha_arr[n])
        {
            max = alpha_arr[n];
            idx = n;
        }
    }
    int cnt(0);
    for(int m=0; m< 26; m++)
    {
        if (max == alpha_arr[m] && m != idx)
        {
            cout << "?" << endl;
            break;
        }
        cnt++;
    }

    if (cnt == 26)
        cout << char(idx+65) << endl;

    return 0;
}