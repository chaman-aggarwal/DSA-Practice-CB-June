https://leetcode.com/problems/subarray-sums-divisible-by-k/

class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) {
        
        unordered_map<int, int> mp;
        
        mp[0]++;
        int prefixSum = 0;
        int count = 0;
        int rem;
        
        for(auto i:A)
        {
            prefixSum += i;
            rem = prefixSum % K;
            if(rem < 0)
            {
                rem += K;
            }
            if(mp[rem]!=0)
            {
                count += mp[rem];
            }
            mp[rem]++;
        }
        
        return count;
        
    }
};