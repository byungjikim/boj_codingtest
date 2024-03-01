#include <iostream>
#include <string>

using namespace std;

int main()
{
    int count(0);
    string s;
    getline(cin, s);

    for(int i=0; i<s.length(); i++)
    {
        if (s[i] == ' ' && !(i==0 || i==s.length()-1))
            count++;
        
        else if(s[i] == ' ' && i==0)
            while(s[i] == ' ')
                i++;   
    }

    if(s.length()>1 && (s[0]== ' ' || s[s.length()-1] == ' ') || (s[0]!= ' ' && s[s.length()-1] != ' '))
        cout << count + 1 << endl;
    else
        cout << count << endl;

    return 0;
}