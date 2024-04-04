// 1614. Maximum Nesting Depth of the Parentheses
class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '(')
            {
            st.push('(');
            int t =st.size();
            ans = max(ans , t);
            }
            else if (s[i] == ')')
            {
                st.pop();
            
            }
        }
        return ans;
    }
};
