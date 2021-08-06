https://hack.codingblocks.com/app/contests/2439/61/problem

#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        int temp[n];
        for(int i=0; i<n; i++)
        {
            int j=i-x;
            if(j<0)
            {
                j += n;
            }
            temp[i] = arr[i] + arr[j];
        }

        for(int i=0; i<n; i++)
        {
            arr[i] = temp[i];
        }

    }

    int res = 0;
    for(int i=0; i<n; i++)
    {
        res += arr[i];
    }

    cout<<res;
    
    return 0;
}
