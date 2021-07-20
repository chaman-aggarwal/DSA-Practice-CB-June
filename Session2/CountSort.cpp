https://hack.codingblocks.com/app/contests/2439/266/problem

#include <iostream>
#include <algorithm>
using namespace std;

void counting_sort(int arr[], int n)
{
    int maxElement = -1;
    for(int i=0; i<n; i++)
    {
        maxElement = max(maxElement, arr[i]);
    }
    // arr = {1, 2, 5, 3, 5}
    int freq[maxElement+1] = {0};
    for(int i=0; i<n; i++)
    {
        freq[arr[i]]++;
    // freq[5]++
    }

    int index = 0;
    for(int i=0; i<=maxElement; i++)
    {
        while(freq[i]>0)
        {
            arr[index] = i;
            freq[i]--;
            index++;
        }
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    counting_sort(arr, n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}