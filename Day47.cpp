// 28. Find the Index of the First Occurrence in a String

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.size();
        int h = haystack.size();
        int i = 0, j = 0;
        
        if (n == 0) {
            return 0; 
        }
        for(int i=0;i<h-n+1;i++)
        {
            if(haystack[i] == needle[0])
            {
                if(haystack.substr(i, n).compare(needle) == 0 )
                return i;
            }
        }
        return -1;
    }

};
