#include <iostream>

using namespace std;

int main()
{
    int array_num;
    int change_cnt;

    cin >> array_num;
    cin >> change_cnt;

    int array_ball[array_num];

    for (int j=0; j<array_num; j++)
        array_ball[j] = j+1;

    for(int i=0; i<change_cnt; i++)
    {
        int a,b, temp;
        cin >> a;
        cin >> b;
        temp = array_ball[a-1];
        array_ball[a-1] = array_ball[b-1];
        array_ball[b-1] = temp;
    }

    for (int j=0; j<array_num; j++)
        cout << array_ball[j] << " ";
    
    cout << endl;

    return 0;
}