https://hack.codingblocks.com/app/contests/2439/2032/problem

#include <iostream>
using namespace std;
int main() {
    int m, n;
    cin>>m>>n;
    int matrix[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>matrix[i][j];
        }
    }

    for(int row=0; row<m; row++)
    {
        for(int i=row, j=0; j<n && i>=0; i--, j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int col=1; col<n; col++)
    {
        for(int i=m-1, j=col; j<n && i>=0; i--, j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
