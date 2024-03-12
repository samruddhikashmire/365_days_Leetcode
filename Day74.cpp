//791. Custom Sort String
// Approach 1:
class Solution {
public:
    string customSortString(string S, string T) {
        int count[26] = {0};

        for(char &ch :T)
        {
            count[ch-'a']++;
        }

        string ans = "";
        for(char &ch : S)
        {
            while(count[ch-'a']>0)
            {
                ans.push_back(ch);
                count[ch-'a']--;
            }
        }
        for(char &ch : T)
        {
            if(count[ch-'a'] >0)
            {
                ans.push_back(ch);
                count[ch-'a']--;
            }
        }
        return ans;
    }
};

Approach 2:
class Solution {
public:
    string customSortString(string S, string T) {
        vector<int> mp(26,-1);
        for(int i=0;i<S.length();i++)
        {
            char ch = S[i];
            mp[ch-'a'] = i;
        }
        auto mycom = [&mp] (char& ch1 , char& ch2)
        {
            return mp[ch1-'a']<mp[ch2-'a'];
        };
        sort(begin(T) , end(T) , mycom);
        return T;
    }
};
