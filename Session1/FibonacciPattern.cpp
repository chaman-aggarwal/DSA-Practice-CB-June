https://hack.codingblocks.com/app/contests/2439/498/problem

#include <iostream>
using namespace std;
int main() {
    int n, a=0, b=1, c;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<a<<" ";
            c = a+b;
            a = b;
            b = c;
        }
        cout<<endl;
    }
    return 0;
}