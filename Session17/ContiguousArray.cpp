https://leetcode.com/problems/contiguous-array/

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        unordered_map<int, int> m;
        int prefixSum = 0;
        int maxLen = 0;
        int n = nums.size();
        
        for(int i=0; i<n; i++)
        {
            prefixSum += nums[i]==0 ? -1 : 1;
            if(prefixSum==0)
            {
                maxLen = i+1;
            }
            else if(m.count(prefixSum))
            {
                maxLen = max(maxLen, i-m[prefixSum]);
            }
            else
            {
                m[prefixSum] = i;
            }
        }
        
        return maxLen;
        
    }
};