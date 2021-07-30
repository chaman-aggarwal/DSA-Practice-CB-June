https://hack.codingblocks.com/app/contests/2439/552/problem

#include <iostream>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        int arr1[n], arr2[m];
        for(int i=0; i<n; i++)
        {
            cin>>arr1[i];
        }
        for(int i=0; i<m; i++)
        {
            cin>>arr2[i];
        }

        int i=0, j=0;
        int si=0, sj=0;
        int res = 0;

        while(i<n && j<m)
        {
            if(arr1[i] < arr2[j])
            {
                si += arr1[i];
                i++;
            }
            else if(arr1[i] > arr2[j])
            {
                sj += arr2[j];
                j++;
            }
            else
            {
                res += max(si, sj) + arr1[i];
                i++, j++;
                si = 0, sj = 0;
            }
        }

        while(i<n)
        {
            si += arr1[i];
            i++;
        }

        while(j<m)
        {
            sj += arr2[j];
            j++;
        }

        cout<<max(si, sj)+res<<endl;

    }
    return 0;
}
