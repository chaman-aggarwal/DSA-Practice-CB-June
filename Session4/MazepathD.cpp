https://hack.codingblocks.com/app/contests/2469/234/problem

#include <iostream>
using namespace std;

int path(int i, int j, int row, int col, string res)
{
    if(i==row && j==col)
    {
        cout<<res<<" ";
        return 1;
    }
    if(i > row || j > col)
    {
        return 0;
    }

    int vertical = path(i+1, j, row, col, res + "V");
    int horizontal = path(i, j+1, row, col, res + "H");
    int diagonal = path(i+1, j+1, row, col, res + "D");

    return vertical+horizontal+diagonal;

}

int main() {
    int n, m;
    cin>>n>>m;
    int res = path(0, 0, n-1, m-1, "");
    cout<<endl;
    cout<<res;
    return 0;
}
