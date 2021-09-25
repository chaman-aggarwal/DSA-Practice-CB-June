https://leetcode.com/problems/ugly-number-ii/

class Solution {
public:
    int nthUglyNumber(int n) {
        
        int dp[n+1];
        dp[1] = 1;
        int idx2 = 1, idx3 = 1, idx5 = 1;
        
        for(int i=2; i<=n; i++)
        {
            int val2 = 2*dp[idx2];
            int val3 = 3*dp[idx3];
            int val5 = 5*dp[idx5];
            
            int minVal = min(val2, min(val3, val5));
            dp[i] = minVal;
            
            if(minVal == val2)
            {
                idx2++;
            }
            if(minVal == val3)
            {
                idx3++;
            }
            if(minVal == val5)
            {
                idx5++;
            }
            
        }
        
        return dp[n];
        
    }
};