https://hack.codingblocks.com/app/contests/2469/525/problem

#include <iostream>
using namespace std;

int boardpath(int currSum, int n, int faces, string ans)
{
    if(currSum==n)
    {
        cout<<ans<<" ";
        return 1;
    }
    int count = 0;
    for(int dice=1; dice<=faces && currSum + dice <= n; dice++)
    {
        count += boardpath(currSum+dice, n, faces, ans + to_string(dice));
    }

    return count;
}

int main() {
    int n, faces;
    cin>>n>>faces;
    int ans = boardpath(0, n, faces, "");
    cout<<endl;
    cout<<ans;
    return 0;
}
