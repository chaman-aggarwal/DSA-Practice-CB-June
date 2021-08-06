https://hack.codingblocks.com/app/contests/2469/543/problem

#include <iostream>
using namespace std;

void generateParenthesis(int index, int open, int close, int n, char output[])
{
    if(index == 2*n)
    {
        output[index] = '\0';
        cout<<output<<endl;
        return;
    }
	if(close<open)
    {
        output[index] = ')';
        generateParenthesis(index+1, open, close+1, n, output);
    }
    if(open<n)
    {
        output[index] = '(';
        generateParenthesis(index+1, open+1, close, n, output);
    }
}

int main() {

    char output[100];
    int n;
    cin>>n;
    generateParenthesis(0, 0, 0, n, output);
    return 0;
}
