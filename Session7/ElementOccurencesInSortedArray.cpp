https://hack.codingblocks.com/app/contests/2469/756/problem

#include <iostream>
using namespace std;

int numberOfOcc(int arr[], int n, int target)
{
    int s = 0;
    int e = n-1;
    int first = -1, last = -1;

    while(s<=e)
    {
        int mid = (s+e)/2;
        if(arr[mid]==target)
        {
            first = mid;
            e = mid-1;
        }
        else if(arr[mid] > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    s = 0;
    e = n-1;

    while(s<=e)
    {
        int mid = (s+e)/2;
        if(arr[mid]==target)
        {
            last = mid;
            s = mid+1;
        }
        else if(arr[mid] > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    if(first==-1)
    {
        return -1;
    }

    return last - first + 1;

}

int main() {
    int n, target;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cin>>target;
    cout<<numberOfOcc(arr, n, target);
    return 0;
}
