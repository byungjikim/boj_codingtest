#include <iostream>
#include <string>

using namespace std;

int main()
{
    string num1, num2;
    cin >> num1 >> num2;

    char temp;
    temp = num1[0];
    num1[0] = num1[2];
    num1[2] = temp;

    temp = num2[0];
    num2[0] = num2[2];
    num2[2] = temp;

    for(int i=0; i<3; i++)
    {
        if ((int)num1[i] > (int)num2[i])
        {
            cout << num1 << endl;
            break;
        }

        else if ((int)num1[i] < (int)num2[i])
        {
            cout << num2 << endl;
            break;
        }
    }


    return 0;
}