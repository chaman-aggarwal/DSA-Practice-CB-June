https://hack.codingblocks.com/app/contests/2439/1086/problem

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool compare(string a, string b)
{
	return a+b>b+a;
}
int main() {
	int test;
	cin>>test;
	while(test>0)
	{
		int n;
		cin>>n;
		string s[n];
		for(int i=0; i<n; i++)
		{
			cin>>s[i];
		}
		sort(s, s+n, compare);
		string res = "";
		for(int i=0; i<n; i++)
		{
			res += s[i];
		}
		cout<<res<<endl;
		test--;
	}
	return 0;
}