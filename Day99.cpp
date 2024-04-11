// Given string num representing a non-negative integer num, and an integer k, return the smallest possible integer after removing k digits from num.
class Solution {
public:
    string removeKdigits(string num, int k) {
        string res = "";
        for(int i=0;i<num.length();i++)
        {
            while(res.length()>0 && res.back()>num[i] && k>0)
            {
                res.pop_back();
                k--;
            } 
            if(res.length() > 0 || num[i]!='0')
            {
                res.push_back(num[i]);
            }

        }
        while(k>0 && res.length() >0)
        {
            res.pop_back();
            k--;
        }
        if(res=="")
        return "0";
        
        return res;
    }
};
