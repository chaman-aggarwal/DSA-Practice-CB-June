https://hack.codingblocks.com/app/contests/2439/1089/problem

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    int c1, c2, c3, c4, n, m;
    int cab[1001], rick[1001];
    while(t--)
    {
        cin>>c1>>c2>>c3>>c4;
        cin>>n>>m;
        for(int i=0; i<n; i++)
        {
            cin>>rick[i];
        }
        for(int i=0; i<m; i++)
        {
            cin>>cab[i];
        }

        int costCab = 0, costRick = 0, ans = 0;
        for(int i=0; i<n; i++)
        {
            costRick += min(c1*rick[i], c2);
        }
        costRick = min(costRick, c3); // eq1

        for(int i=0; i<m; i++)
        {
            costCab += min(c1*cab[i], c2);
        }
        costCab = min(costCab, c3); // eq2

        ans = min(costCab+costRick, c4);
        cout<<ans<<endl;

    }
    return 0;
}