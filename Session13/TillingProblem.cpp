https://hack.codingblocks.com/app/contests/2469/1066/problem

#include <iostream>
using namespace std;

int countWays(int n, int m)
{
    int dp[n+1];
    dp[0] = 0;
    for(int i=1; i<=n; i++)
    {
        if(i < m)
        {
            dp[i] = 1;
        }
        else if(i==m)
        {
            dp[i] = 2;
        }
        else
        {
            dp[i] = dp[i-1] + dp[i-m]; 
        }
        dp[i] %= 1000000007;
    }
    return dp[n];
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        cout<<countWays(n, m)<<endl;
    }
    return 0;
}
