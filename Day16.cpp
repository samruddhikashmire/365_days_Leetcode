/*
Given a balanced parentheses string s, return the score of the string.
The score of a balanced parentheses string is based on the following rule:

1. "()" has score 1.
2. AB has score A + B, where A and B are balanced parentheses strings.
3. (A) has score 2 * A, where A is a balanced parentheses string.
 
*/

class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> stack;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
             if(s[i] =='(')
             {
               stack.push(count);
               count=0;
               
             }
            else
             {
                 count = stack.top() + max(1 , count*2);
                 stack.pop();
             }

        }
        return count;

        


    }
};
