https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> mp;
        int n = nums.size();
        
        for(int i=0; i<n; i++)
        {
            int diff = target - nums[i];
            
            if(mp.count(diff) > 0)
            {
                return {i, mp[diff]};
            }
            
            mp[nums[i]] = i;
            
        }
        
        return {};
        
    }
};