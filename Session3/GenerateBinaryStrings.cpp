https://hack.codingblocks.com/app/contests/2469/564/problem

#include <iostream>
using namespace std;

void print(string s, int i)
{
    // base case
    if(i==s.size())
    {
        cout<<s<<" ";
        return;
    }

    if(s[i]=='?')
    {
        s[i] = '0';
        print(s, i+1);

        s[i] = '1';
        print(s, i+1);
    }
    else
    {
        print(s, i+1);
    }

}

int main() {

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        print(s, 0);
        cout<<endl;
    }
    return 0;
}
