#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<pair<int,int>> v;
	int n, x, y;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> x >> y;
		v.push_back({ x,y });
	}
	sort(v.begin(), v.end());
	for (int i = 0;i < n;i++) {
		cout << v[i].first << ' ' << v[i].second << '\n';
	}
	return 0;
}

// #include <iostream>

// using namespace std;

// struct axis
// {
//     int x;
//     int y;
// };

// int main()
// {
//     int num;
//     cin >> num;

//     axis axis_[num];
//     axis* axis_list = new axis [num];

//     for(int i=0; i<num; i++)
//     {
//         cin >> axis_[i].x >> axis_[i].y;
//     }

//     for(int i=0; i<num; i++)
//     {
//         int min = 100001;
//         int idx;
//         for(int j=i; j<num; j++)
//         {
//             if(min > axis_[j].x)
//             {
//                 idx = j;
//                 min = axis_[j].x;
//                 axis_list[i] = axis_[j];
//             }
//         }
//         axis_[idx].x = axis_[i].x;
//         axis_[idx].y = axis_[i].y;
//     }

//     for(int i=0; i<num; i++)
//     {
//         int start(i), end, count(0);
//         while(axis_list[i].x == axis_list[i+1].x && i!=num-1)
//         {
//             count++;
//             i++;
//         }
//         end =i;
//         if (count != 0)
//         {
//             for(int j=start; j<=end; j++)
//             {
//                 int min = 100001;
//                 int idx;
//                 for(int k=j; k<=end; k++)
//                 {
//                     if(min > axis_list[k].y)
//                     {
//                         idx = k;
//                         min = axis_list[k].y;
//                     }
//                 }
//                 axis temp = axis_list[idx];
//                 axis_list[idx] = axis_list[j];
//                 axis_list[j] = temp;
//             }
//         }
//         count =0;
//     }

//     for(int i=0; i<num; i++)
//         cout << axis_list[i].x << " " << axis_list[i].y << '\n';

//     return 0;
// }