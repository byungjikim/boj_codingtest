#include <iostream>

using namespace std;

int main()
{
    int num, k, result(0);
    cin >> num;

    for(int i=0; i<num; i++)
    {
        string s;
        int flag(0);
        cin >> s;
        
        for(int j=0; j<s.length(); j++)
        {
            for(k=j+1; k<s.length(); k++)
            {
                if (s[j] == s[k] && j+1 == k)
                    j++;
                
                else if(s[j] == s[k])
                {
                   flag++;
                   break; 
                }  
            }
            if(flag)
                break;
        }
        if (k==s.length())
                result++;
    }

    cout << result << endl;

    return 0;
}