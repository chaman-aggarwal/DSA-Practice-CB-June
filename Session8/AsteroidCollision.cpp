https://leetcode.com/problems/asteroid-collision/

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        // collision => i (-) && s.top() (+)
        stack<int> s;
        for(auto i:asteroids)
        {
            if(s.empty() || i>0 || s.top()<0)
            {
                s.push(i);
            }
            else
            {
                bool destroyed = false;
                while(!s.empty() && s.top()>0)
                {
                    int tp = s.top();
                    if(abs(i) > tp)
                    {
                       s.pop(); 
                    }
                    else if(abs(i) < tp)
                    {
                        destroyed = true;
                        break;
                    }
                    else
                    {
                        s.pop();
                        destroyed = true;
                        break;
                    }
                }
                if(destroyed==false)
                {
                    s.push(i);
                }
            }
        }
        
        vector<int> ans(s.size());
        for(int i=s.size()-1; i>=0; i--)
        {
            ans[i] = s.top();
            s.pop();
        }
        return ans;
        
    }
};