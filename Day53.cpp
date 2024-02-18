// Count Prefix and Suffix Pairs I
class Solution {
public:
    
     bool isPrefixAndSuffix(string str1 , string str2)
    {
        bool p = false , s = false   ;
        int i=0 , j=0;
        
        while(i<str1.length())
        {
            if(str1[i] != str2[j])
            {
                return false;
            }
            i++;
            j++;
            
        }
        p = true;
        
        i=str1.length()-1,j=str2.length()-1;
        while(i<str1.length())
        {
            if(str1[i]!=str2[j])
            {
                return false;
            }
            i--;
            j--;
        }
        s = true;
        
        if(p==true && s==true)
        {
            return true;
        }
        return false;
            
        
      
    }
    
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        vector<int>b;
        int count = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                
                int ans = 0;
                ans = isPrefixAndSuffix(words[i] , words[j]);
                b.push_back(ans);
            }
            
        }
        
        for(int i=0;i<b.size();i++)
        {
            count += b[i];
        }
        return count;
    }
};
