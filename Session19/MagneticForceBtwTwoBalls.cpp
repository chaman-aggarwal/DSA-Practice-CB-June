https://leetcode.com/problems/magnetic-force-between-two-balls/

class Solution {  
    
    bool isPossible(vector<int>& position, int m, int mid)
    {
        int count = 1;
        int placed = position[0];
        for(int i=1; i<position.size(); i++)
        {
            if(position[i]-placed >= mid)
            {
                placed = position[i];
                count++;
            }
            if(count==m)
            {
                return true;
            }
        }
        return false;
    }
    
public:
    int maxDistance(vector<int>& position, int m) {
        
        sort(position.begin(), position.end());
        int n = position.size();
        
        int s = 1;
        int e = position[n-1];
        int ans = 0;
        
        while(s<=e)
        {
            int mid = (s+e)/2;
            if(isPossible(position, m, mid))
            {
                ans = mid;
                s = mid+1;
            }
            else
            {
                e = mid-1;
            }
        }
        
        return ans;
        
    }
};