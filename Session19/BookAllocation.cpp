#include <iostream>
#include <climits>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{
    int student = 1;
    int pages = 0;
    for(int i=0; i<n; i++)
    {
        if(pages + arr[i] > mid)
        {
            student++;
            pages = arr[i];
            if(student > m)
            {
                return false;
            }
        }
        else
        {
            pages += arr[i];
        }
    }
    return true;
}

int number_of_pages(int arr[], int n, int m)
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
    }
    int s = arr[n-1];
    int e = sum;
    int ans = INT_MAX;

    while(s<=e)
    {
        int mid = (s+e)/2;
        if(isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }
    }
    return ans;
}

int main() {
    int n, m;
    cin>>n>>m;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<number_of_pages(arr, n, m);
    return 0;
}
