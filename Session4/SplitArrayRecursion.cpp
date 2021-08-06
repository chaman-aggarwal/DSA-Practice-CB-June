https://hack.codingblocks.com/app/contests/2469/250/problem

#include <iostream>
using namespace std;

int divide(int arr[], int index, int left, int right, string res1, string res2, int n)
{
    if(index==n)
    {
        if(left==right)
        {
            cout<< res1 + "and " + res2;
            cout<<endl;
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int count=0;

    count += divide(arr, index+1, left+arr[index], right, res1 + to_string(arr[index]) + " ", res2, n);

    count += divide(arr, index+1, left, right+arr[index], res1, res2 + to_string(arr[index]) + " ", n);

    return count;

}

int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<divide(arr, 0, 0, 0, "", "", n);

    return 0;
}

