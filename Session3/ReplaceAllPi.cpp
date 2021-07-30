https://hack.codingblocks.com/app/contests/2469/1381/problem

#include <iostream>
using namespace std;

void replacePi(char arr[], int i)
{
    // base case
    if(arr[i]=='\0' or arr[i+1]=='\0')
    {
        return;
    }
    // look for pi value in current index
    if(arr[i]=='p' && arr[i+1]=='i')
    {
        // shifting + replace pi with 3.14
        int j=i+2;
        while(arr[j]!='\0')
        {
            j++;
        }
        while(j>=i+2)
        {
            arr[j+2] = arr[j];
            j--;
        }

        // replace with 3.14 and recursive call
        arr[i] = '3';
        arr[i+1] = '.';
        arr[i+2] = '1';
        arr[i+3] = '4';

        replacePi(arr, i+4);

    }
    else
    {
        replacePi(arr, i+1);
    }
}

int main() {

    int t;
    cin>>t;
    while(t--)
    {
        char arr[1000];
        cin>>arr;
        replacePi(arr, 0);
        cout<<arr<<endl;
    }
    return 0;
}
