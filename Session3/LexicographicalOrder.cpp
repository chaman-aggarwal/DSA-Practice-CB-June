https://hack.codingblocks.com/app/contests/2469/508/problem

#include <iostream>
using namespace std;

void print(int i, int n)
{
    // base case
    if(i>n)
    {
        return;
    }
    cout<<i<<" ";
    for(int j=0; j<10; j++)
    {
        print(i*10+j, n);
        // 10, 11, 12, 13, 14....19
    }
}

int main() {

    int n;
    cin>>n;

    cout<<0<<" ";
    for(int i=1; i<=9; i++)
    {
        print(i, n);
    }

    return 0;
}


