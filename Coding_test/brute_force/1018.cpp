#include <iostream>
#include <cstring>

using namespace std;

int make_chessboard(char chessboard[8*8], int h=8, int w=8)
{
    // char* chessboard = new char [h*w];
    char chessboard_2[8*8];
    memcpy(chessboard_2, chessboard, 8*8);

    // even: First and last are different

    int b_cnt(0), w_cnt(0);

    if (chessboard[0] != 'W')
    {
        chessboard[0] = 'W';
        w_cnt++;
        // cout<< "start with w " << endl;
    }

    for (int i=0; i<h*w-1; i++)
    {
        if(chessboard[i] == 'B' && chessboard[i] == chessboard[i+1] && i%w !=w-1)
        {
            chessboard[i+1] = 'W';
            w_cnt++;
            // cout << i << endl;
        }

        else if(chessboard[i] == 'W' && chessboard[i] == chessboard[i+1] && i%w !=w-1)
        {
            chessboard[i+1] = 'B';
            w_cnt++;
            // cout << i << endl;

        }
        else if(chessboard[i] == 'B' && chessboard[i] != chessboard[i+1] && i%w ==w-1)
        {
            chessboard[i+1] = 'B';
            w_cnt++;
            // cout << i << endl;

        }

        else if(chessboard[i] == 'W' && chessboard[i] != chessboard[i+1] && i%w ==w-1)
        {
            chessboard[i+1] = 'W';
            w_cnt++;
            // cout << i << endl;
            
        }

        // if(i%w == w-1)
        //     cout << chessboard[i] << endl;
        // else
        //     cout << chessboard[i];
    }
    // cout << chessboard[63] << endl;

    if (chessboard_2[0] != 'B')
    {
        chessboard_2[0] = 'B';
        b_cnt++;
    }

    for (int i=0; i<h*w-1; i++)
    {
        if(chessboard_2[i] == 'B' && chessboard_2[i] == chessboard_2[i+1] && i%w !=w-1)
        {
            chessboard_2[i+1] = 'W';
            b_cnt++;
        }

        else if(chessboard_2[i] == 'W' && chessboard_2[i] == chessboard_2[i+1] && i%w !=w-1)
        {
            chessboard_2[i+1] = 'B';
            b_cnt++;
        }

        else if(chessboard_2[i] == 'B' && chessboard_2[i] != chessboard_2[i+1] && i%w ==w-1)
        {
            chessboard_2[i+1] = 'B';
            b_cnt++;
        }

        else if(chessboard_2[i] == 'W' && chessboard_2[i] != chessboard_2[i+1] && i%w ==w-1)
        {
            chessboard_2[i+1] = 'W';
            b_cnt++;
        }
    }

    // cout << w_cnt << " " << b_cnt << endl;
    return min(w_cnt, b_cnt);
}
   


int main()
{
    int h, w;
    cin >> h >> w;

    char chessboard[8*8];
    // char chess[h][w];

    char **chess = new char*[h];
    for (int i=0; i<h; i++)
        chess[i] = new char[w];

    for(int i=0; i<h; i++)
    {
        for(int j=0; j<w; j++)
            cin >> chess[i][j];
    }

    int h_gap = h-8;
    int w_gap = w-8;
    int min_arr[(h_gap+1)*(w_gap+1)], min_val(64);
    int count_(0);
    int cnt_(0);


    for(int i=0; i<=h_gap; i++)
    {
        for(int j=0; j<=w_gap; j++)
        {
            for(int size_h=0; size_h<8; size_h++)
            {
                for(int size_w=0; size_w<8; size_w++)
                {
                    chessboard[(size_h)*8 +size_w] = chess[i+size_h][j+size_w];
                }
            }

            min_arr[i*(w_gap+1) + j] = make_chessboard(chessboard);
            // cout << "idx" << i*(w_gap+1) + j << endl;
        }   
    }
    for(int i=0; i<(h_gap+1)*(w_gap+1); i++)
    {
        // cout << min_arr[i] << endl;
        if(min_arr[i] < min_val)
            min_val = min_arr[i];
    }

    cout << min_val << endl;

    return 0;
}