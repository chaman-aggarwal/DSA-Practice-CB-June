https://leetcode.com/problems/reorganize-string/

class Solution {
public:
    string reorganizeString(string S) {
        
        unordered_map<char, int> m;
        for(auto i:S)
        {
            m[i]++;
        }
        
        priority_queue<pair<int, char>> pq;
        for(auto i:m)
        {
            pq.push({i.second, i.first});
        }
        
        string res = ""; 
        while(pq.size()>1)
        {
            char a = pq.top().second;
            pq.pop();
            char b = pq.top().second;
            pq.pop();
            res += a;
            res += b;
            
            m[a]--;
            m[b]--;
            
            if(m[a]>0)
            {
                pq.push({m[a], a});
            }
            if(m[b]>0)
            {
                pq.push({m[b], b});
            }
        }
        
        if(!pq.empty())
        {
            if(pq.top().first > 1)
            {
                return "";
            }
            else
            {
                res += pq.top().second;
            }
        }
        
        return res;
    }
};