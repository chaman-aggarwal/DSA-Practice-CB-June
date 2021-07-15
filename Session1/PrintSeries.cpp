https://hack.codingblocks.com/app/contests/2439/201/problem

#include <iostream>
using namespace std;
int main() {
    int n1, n2;
    cin>>n1>>n2;
    int i=1;
    int count = 0;
    while(count<n1)
    {
        int val = 3*i+2;
        if(val%n2!=0)
        {
            cout<<val<<endl;
            count++;
        }
        i++;
    }
    return 0;
}