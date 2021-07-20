https://hack.codingblocks.com/app/contests/2439/75/problem

#include <iostream>
using namespace std;
int main() {
    
    int n;
    cin>>n;
    int space1 = n-1;
    int space2 = -1;
    int num = 1;

    for(int row=1; row<=n; row++)
    {
        int begin;
        if(row <= n/2+1)
        {
            begin = row;
        }
        else
        {
            begin = n-row+1;
        }
        for(int i=1; i<=space1; i++)
        {
            cout<<"  ";
        }

        for(int i=1; i<=num; i++)
        {
            cout<<begin<<" ";
            begin--;
        }

        for(int i=1; i<=space2; i++)
        {
            cout<<"  ";
        }
        int i;
        if(row==1 || row==n)
        {
            i=2;
        }
        else
        {
            i=1;
        }

        begin = 1;
        for(; i<=num; i++)
        {
            cout<<begin<<" ";
            begin++;
        }

        if(row<=n/2)
        {
            space1 -= 2;
            space2 += 2;
            num++;
        }
        else
        {
            space1 += 2;
            space2 -= 2;
            num--;
        }

        cout<<endl;

    }
    
    return 0;
}