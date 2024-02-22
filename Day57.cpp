// 997. Find the Town Judge
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> trusting(n+1) , trusted(n+1);
        for(auto ele: trust)
        {
            trusting[ele[0]]++;
            trusted[ele[1]]++;
        }
         for (int i = 1; i <= n; i++)
        {
             if (trusting[i] == 0 and trusted[i] == n - 1)
             return i;
        }
        return -1;
    }
};
