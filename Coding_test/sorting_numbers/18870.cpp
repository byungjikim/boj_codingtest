#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid; 
        } else if (arr[mid] < target) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }

    return -1; 
}

int main()
{
    int n;
    cin >> n;
    vector <int> v;
    
    for (int i=0; i< n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    vector <int> temp = v;

    sort(v.begin(), v.end());

    int cnt(0);
    for(int i=0; i< n; i++)
    {
        if(i==0 || v[i] != v[i-1])
            v[cnt++] = v[i];
    }
    v.erase(v.begin() + cnt+1, v.end());
    
    for(int i=0; i< n; i++)
    {
        int idx = binarySearch(v, temp[i]);
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}