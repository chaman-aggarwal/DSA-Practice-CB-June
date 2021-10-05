https://leetcode.com/problems/group-anagrams/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        int n = strs.size();
        unordered_map<string, vector<string>> m;
        string temp;
        
        for(auto str:strs)
        {
            temp = str;
            sort(str.begin(), str.end());
            m[str].push_back(temp);
        }
        
        vector<vector<string>> ans;
        
        for(auto i:m)
        {
            ans.push_back(i.second);
        }
        
        return ans;
        
    }
};