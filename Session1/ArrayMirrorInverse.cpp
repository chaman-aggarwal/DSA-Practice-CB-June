https://hack.codingblocks.com/app/contests/2439/480/problem

#include<bits/stdc++.h>
using namespace std;

bool isMirrorInverse(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[arr[i]] != i)
            return false;
    }
    return true;
}
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    if (isMirrorInverse(arr,n))
            cout << "true";
    else
        cout << "false";
    return 0;
}