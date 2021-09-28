https://leetcode.com/problems/word-break/

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        
        int n = s.size();
        vector<bool> dp(n+1, false);
        dp[0] = true;
        unordered_set<string> st(wordDict.begin(), wordDict.end());
        
        for(int i=0; i<n; i++)
        {
            for(int j=i; j>=0; j--)
            {
                if(dp[j]==true && st.count(s.substr(j, i-j+1)))
                {
                    dp[i+1] = true;
                    break;
                }
            }
        }
        
        return dp[n];
         
    }
};