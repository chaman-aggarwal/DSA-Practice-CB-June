https://hack.codingblocks.com/app/contests/2469/162/problem

#include <iostream>
#include <climits>
using namespace std;

int DP[1001][1001];
int eggDropTDDP(int plates, int floors) 
{
    if(floors==0 or floors==1) return floors;
    if(plates==1) return floors;
    if(DP[plates][floors] != -1) 
        return DP[plates][floors];

    int result = INT_MAX;
    for(int x = 1; x <= floors; x++) 
    {
        int retval = 1 + max(eggDropTDDP(plates-1, x-1), eggDropTDDP(plates, floors-x));
        if(retval < result) 
        {
            result = retval;
        }
    }
    return DP[plates][floors] = result;
}

int main()
{
    int plates, floors, t;
    cin>>t;
    while(t--) 
    {
        cin>>plates>>floors;
        memset(DP, -1, sizeof(DP));
        cout<<eggDropTDDP(plates, floors)<<endl;
    }
    return 0;
}