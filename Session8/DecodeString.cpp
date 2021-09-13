https://leetcode.com/problems/decode-string/

class Solution {
public:
    string decodeString(string s) {
        
        stack<char> st;
        for(char c:s)
        {
            if(c!=']')
            {
                st.push(c);
            }
            else
            {
                string curr="";
                while(st.top()!='[')
                {
                    curr = st.top() + curr;
                    st.pop();
                }
                st.pop();
                
                string num="";
                while(!st.empty() && isdigit(st.top()))
                {
                    num = st.top() + num;
                    st.pop();
                }
                
                int k = stoi(num);
                while(k--)
                {
                    for(char i:curr)
                    {
                        st.push(i);
                    }
                }
            }
        }
        
        string res = "";
        while(!st.empty())
        {
            res = st.top() + res;
            st.pop();
        }
        
        return res;
        
    }
};