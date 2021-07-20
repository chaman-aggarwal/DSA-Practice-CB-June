https://hack.codingblocks.com/app/contests/2439/2584/problem

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    // value, index
    pair<int, int> arrPos[n];
    for(int i=0; i<n; i++)
    {
        arrPos[i].first = arr[i];
        arrPos[i].second = i;
    }

    sort(arrPos, arrPos+n); 

    int swaps = 0;
    for(int i=0; i<n; i++)
    {
        if(arrPos[i].second==i)
        {
            continue;
        }
        else
        {
            swap(arrPos[i], arrPos[arrPos[i].second]);
            swaps++;
            i--;
        }
    }
    cout<<swaps;
    return 0;
}