https://hack.codingblocks.com/app/contests/2439/1528/problem

#include <iostream>
using namespace std;

int minOperations(string s)
{
    int n = s.size();
    int count1 = 0; // ababababab...
    int count2 = 0; // bababababa....
    for(int i=0; i<n; i++)
    {
        // ababababa

        if(s[i]-'a' == i%2) // i%2 == 0, 1, 0, 1, 0, 
        {
            count2++;
        }
        else
        {
            count1++;
        }
    }
    return min(count1, count2);
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<minOperations(s)<<endl;
    }
    return 0;
}
