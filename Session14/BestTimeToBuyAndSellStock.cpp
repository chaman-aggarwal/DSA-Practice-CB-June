https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        int profit = 0;
        int minVal = prices[0];
        
        for(int i=1; i<n; i++)
        {
            if(prices[i] < minVal)
            {
                minVal = prices[i];
            }
            else
            {
                profit = max(profit, prices[i]-minVal);
            }
        }
        
        return profit;
        
    }
};