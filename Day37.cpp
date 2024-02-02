/*
An integer has sequential digits if and only if each digit in the number is one more than the previous digit.
Return a sorted list of all the integers in the range [low, high] inclusive that have sequential digits.
*/
class Solution {
public:
    
    vector<int> sequentialDigits(int low, int high) {
        string c = "123456789";
        vector<int>a;

        for(int i=0;i<c.size();i++)
        {
            for(int j=i+1 ; j<=c.size() ; j++)
            {
                int curr = stoi(c.substr(i,j-i));
                if(curr<= high && curr>=low)
                a.push_back(curr);
            }
        }

        sort(a.begin() , a.end());
        return a ;
    }
};
 
