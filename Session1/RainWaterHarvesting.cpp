https://hack.codingblocks.com/app/contests/2439/1363/problem

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n], leftMax[n], rightMax[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    leftMax[0] = arr[0];
    for(int i=1; i<n; i++)
    {
        leftMax[i] = max(leftMax[i-1], arr[i]);
    }

    rightMax[n-1] = arr[n-1];
    for(int i=n-2; i>=0; i--)
    {
        rightMax[i] = max(rightMax[i+1], arr[i]);
    }

    int ans = 0;

    for(int i=1; i<n-1; i++)
    {
        ans += min(leftMax[i], rightMax[i]) - arr[i];
    }

    cout<<ans;

    return 0;
}