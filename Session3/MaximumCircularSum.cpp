https://hack.codingblocks.com/app/contests/2439/1077/problem

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        int totalSum = 0;
        int currMax = 0;
        int currMin = 0;
        int minSum = INT_MAX;
        int maxSum = INT_MIN;

        for(int i=0; i<n; i++)
        {
            totalSum += arr[i];
            // maximum subarray sum
            currMax = max(currMax+arr[i], arr[i]); 
            maxSum = max(currMax, maxSum);

            // minimum subarray sum
            currMin = min(currMin+arr[i], arr[i]);
            minSum = min(minSum, currMin);

        }

        if(maxSum < 0)
        {
            cout<<maxSum<<endl;
        }
        else
        {
            cout<<max(maxSum, totalSum-minSum)<<endl;
        }
    }
    return 0;
}
