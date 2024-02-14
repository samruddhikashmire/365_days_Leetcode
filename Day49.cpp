// 392. Is Subsequence

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int a = 0;
        int b = 0;
        int count=0;
        while(b<t.size())
        {
            if(s[a] == t[b])
            {
                a++;
                b++;
                count++;
            }
            else
            {
               b++;
            }
        }
        return (count==s.size());
    }
};
