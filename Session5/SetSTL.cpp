#include <iostream>
#include <set>
using namespace std;

int main() {

    int arr[] = {1, 6, 4, 4, 6, 2, 2, 1, 5, 2};
    int n = sizeof(arr)/sizeof(int);

    set<int> s;
    for(int i=0; i<n; i++)
    {
        s.insert(arr[i]);
    }

    s.erase(6);

    // for(auto it=s.begin(); it!=s.end(); it++)
    // {
    //     cout<<*(it)<<", ";
    // }

    cout<<endl;

    for(auto i:s)
    {
        cout<<i<<", ";
    }

    return 0;
}
