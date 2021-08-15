https://hack.codingblocks.com/app/contests/2469/394/problem

#include <iostream>
#include <set>
using namespace std;

void permute(string inp, int i, set<string> &s)
{
    if(inp[i]=='\0')
    {
        s.insert(inp);
        return;
    }

    for(int j=i; inp[j]!='\0'; j++)
    {
        swap(inp[i], inp[j]);
        permute(inp, i+1, s);
        // backtrack
        swap(inp[i], inp[j]);
    }

}

int main() {
    string inp;
    cin>>inp;
    set<string> s;
    permute(inp, 0, s);

    for(auto x:s)
    {
        if(inp < x)
        {
            cout<<x<<endl;
        }
    }

    return 0;
}