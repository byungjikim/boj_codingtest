#include <iostream>

using namespace std;

int main()
{
    int count(0);
    string phone_num;
    getline(cin, phone_num);

    string s_2, s_3, s_4, s_5, s_6, s_7, s_8, s_9;
    s_2 = "ABC";
    s_3 = "DEF";
    s_4 = "GHI";
    s_5 = "JKL";
    s_6 = "MNO";
    s_7 = "PQRS";
    s_8 = "TUV";
    s_9 = "WXYZ";

    for(int i=0; i<phone_num.length(); i++)
    {
        for(int j=0; j<s_2.length(); j++)
        {
            if(s_2[j] == phone_num[i])
            {
                count = count + 2 +1;
                break;       
            }        
        }
        
        for(int j=0; j<s_3.length(); j++)
        {
            if(s_3[j] == phone_num[i])
            {
                count = count + 3 +1;           
                break;
            }
        }
        for(int j=0; j<s_4.length(); j++)
        {
            if(s_4[j] == phone_num[i])
            {
                count = count + 4 +1; 
                break;
            }          
        }
        for(int j=0; j<s_5.length(); j++)
        {
            if(s_5[j] == phone_num[i])
            {
                count = count + 5 +1;
                break;
            }           
        }
        for(int j=0; j<s_6.length(); j++)
        {
            if(s_6[j] == phone_num[i])
            {
                count = count + 6 +1;
                break;
            }           
        }
        for(int j=0; j<s_7.length(); j++)
        {
            if(s_7[j] == phone_num[i])
            {
                count = count + 7 +1;           
                break;
            }
        }
        for(int j=0; j<s_8.length(); j++)
        {
            if(s_8[j] == phone_num[i])
            {
                count = count + 8 +1;           
                break;
            }
        }
        for(int j=0; j<s_9.length(); j++)
        {
            if(s_9[j] == phone_num[i])
            {
                count = count + 9 +1;           
                break;
            }
        }
    }
    cout << count << endl;

    return 0;
}