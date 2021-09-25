https://leetcode.com/problems/coin-change-2/

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        
        if(amount==0)
        {
            return 1;
        }
        if(coins.size()==0)
        {
            return 0;
        }
        
        vector<vector<int>> dp(coins.size()+1, vector<int>(amount+1, 0));
        for(int i=0; i<=coins.size(); i++)
        {
            for(int j=0; j<=amount; j++)
            {
                if(j==0)
                {
                    dp[i][j] = 1;
                }
                else if(i==0)
                {
                    dp[i][j] = 0;
                }
                else
                {
                    dp[i][j] = dp[i-1][j] + (j-coins[i-1] >=0 ? dp[i][j-coins[i-1]] : 0);
                }
            }
        }
        
        return dp[coins.size()][amount];
        
    }
};
