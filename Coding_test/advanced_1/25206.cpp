#include <iostream>

using namespace std;

int main()
{
    string score[9] = {"A+", "A0", "B+", "B0", "C+", "C0", "D+", "D0", "F"};
    float score_arr[9] = {4.5, 4, 3.5, 3, 2.5, 2, 1.5, 1, 0};
    float total_score(0.0);
    float total_weight(0.0);

    for(int i=0; i<20; i++)
    {
        string obj_name, obj_score;
        float score_weight(0);
        cin >> obj_name >> score_weight >> obj_score;
        
        // cout << sizeof(score)/sizeof(score[0]) << endl;

        for(int j=0; j<sizeof(score)/sizeof(score[0]); j++)
        {
            if(obj_score == score[j])
            {
                total_score += score_weight * score_arr[j];
                total_weight += score_weight;
                break;
            }
        }
    }
    cout << total_score / total_weight << endl;

    return 0;
}