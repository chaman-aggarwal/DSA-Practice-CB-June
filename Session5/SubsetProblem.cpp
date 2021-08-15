https://hack.codingblocks.com/app/contests/2469/131/problem

#include <iostream>
using namespace std;

int combinations(int arr[], int n, int index, int currSum, string ans, int target)
{
    // base case
    if(index==n)
    {
        if(target==currSum)
        {
            cout<<ans<<" ";
            return 1;
        }
        return 0;
    }

    int count = 0;

    // include
    count += combinations(arr, n, index+1, currSum+arr[index], ans + to_string(arr[index]) + " ", target);

    // exclude
    count += combinations(arr, n, index+1, currSum, ans, target);

    return count;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int res = combinations(arr, n, 0, 0, "", target);
    cout<<endl;
    cout<<res;
    return 0;
}
