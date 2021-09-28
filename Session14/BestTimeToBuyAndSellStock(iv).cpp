https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/

class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        
        int n = prices.size();
        if(k==0 || n<2)
        {
            return 0;
        }
        
        vector<vector<int>> dp(k+1, vector<int>(n,0));
        
        for(int t=1; t<=k; t++)
        {
            int maxDiff = INT_MIN;
            for(int i=1; i<n; i++)
            {
                maxDiff = max(maxDiff, dp[t-1][i-1] - prices[i-1]);
                int prevDayProfit = dp[t][i-1];
                dp[t][i] = max(prevDayProfit, maxDiff + prices[i]);
            }
        }
        
        return dp[k][n-1];
        
    }
};