#include <iostream>

using namespace std;

struct m_pocket
{
    int n_quarter=0;
    int n_dime =0;
    int n_nickel =0;
    int n_penny =0;
};

int main()
{
    int repeat_times;
    cin >> repeat_times;

    m_pocket pocket[repeat_times];

    for(int i=0; i<repeat_times; i++)
    {
        int money;
        cin >> money;

        if(money>=25)
        {
            pocket[i].n_quarter = money/25;
            money -= pocket[i].n_quarter * 25;
        }

        if(money>=10)
        {
            pocket[i].n_dime = money/10;
            money -= pocket[i].n_dime * 10;
        }

        if(money>=5)
        {
            pocket[i].n_nickel = money/5;
            money -= pocket[i].n_nickel * 5;
        }

        if(money>=1)
        {
            pocket[i].n_penny = money/1;
        }
    }

    for(int i=0; i<repeat_times; i++)
    {
        cout << pocket[i].n_quarter << " " << pocket[i].n_dime << " " << pocket[i].n_nickel << " " << pocket[i].n_penny << endl;
    }

    return 0;
}