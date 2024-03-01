#include <iostream>

using namespace std;

// struct paper_size
// {
//     int paper_column;
//     int paper_row;
// };
// x: column y: row

int main()
{
    int n_paper, result(0);
    cin >> n_paper;
    int frame_paper[100*100] = {0};

    for (int i=0; i<n_paper; i++)
    {
        int column, row;
        cin >> column >> row;
        column -=1;
        row -=1;

        for(int j=0; j<10; j++)
            for(int k=0; k<10; k++)
                frame_paper[(j+row)*100 + column+k] =1;   
    }

    for (int i=0; i<100*100; i++)
        if(frame_paper[i] ==1)
            result++;

    cout << result << endl;

    return 0;
}