// Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
       int n = s.length();
       if(n==0)
       return 0;
       
       int res = 0 , i=n-1;
       while(i>=0 && s[i]==' ')
       i--;
       while(i>=0 && s[i]!=' ')
       {
           res++;
           i--;
       }
       return res;


    }
};
