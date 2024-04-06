//1249. Minimum Remove to Make Valid Parentheses


// APPROACH 1 
class Solution {
public:
    string minRemoveToMakeValid(string s) 
    {
        int n = s.length();
        stack<int>st;
        unordered_set<int>se;

        for(int i=0;i<n;i++)
        {
            if(s[i] == '(')
               st.push(i);
            else if (s[i] == ')')
               {
                    if(st.empty())
                      se.insert(i);
                    else
                      st.pop();
               }
        }
        while(!st.empty())
        {
            se.insert(st.top());
            st.pop();
        }
        string result = "";
        for(int i=0;i<n;i++)
        {
            if(se.find(i) == se.end())
            {
                result.push_back(s[i]);
            }
        }
return result;
    }
    
};



//Approach-2 (Iterate from front and eliminate and then iterate from back and eliminate)
//T.C : O(n)
//S.C : O(n)
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string result = "";
        int n = s.length();
        
        //Iterate fron front and eliminate
        int lastOpen = 0;
        for(int i = 0; i<n; i++) {
            char c = s[i];
            if((c >= 'a' && c <= 'z'))
                result.push_back(c);
            else if(c == '(') {
                result.push_back(c);
                lastOpen++;
            } else if(lastOpen > 0) {
                lastOpen--;
                result.push_back(c);
            }
        }
        
        if(result == "")
            return "";
        
        
        s = result;
        result = "";
        int lastClose = 0;
        n = s.length();
        //Iterate fron back and eliminate
        for(int i = n-1; i>=0; i--) {
            char c = s[i];
            if((c >= 'a' && c <= 'z'))
                result.push_back(c);
            else if(c == ')') {
                result.push_back(c);
                lastClose++;
            } else if(lastClose > 0) {
                lastClose--;
                result.push_back(c);
            }
        }
        reverse(result.begin(), result.end());
        return result;
    }
}; 
