#include <bits/stdc++.h>
using namespace std;

int findCelebrity(vector<vector<int>>& v)
{
    int n = v.size();
    stack<int> s;
    for(int i=0; i<n; i++)
    {
        s.push(i);
    }
    while(s.size()>1)
    {
        int i = s.top();
        s.pop();
        int j = s.top();
        s.pop();
        if(v[i][j] == 1)
        {
            s.push(j);
        }
        else
        {
            s.push(i);
        }
    }

    int cand = s.top();
    for(int i=0; i<n; i++)
    {
        if(i!=cand)
        {
            if(v[cand][i] == 1 || v[i][cand]==0)
            {
                return -1;
            }
        }
    }

    return cand;

}

int main() {
    vector<vector<int>> vect
    {
        {0, 1, 1},
        {0, 0, 0},
        {1, 1, 0}
    };
    cout<<findCelebrity(vect);
    return 0;
}
