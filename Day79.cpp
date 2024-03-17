// Contiguous Array
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        int currSum = 0;
        mp[0] = -1;
        int res = 0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            currSum += 1;
            else
            currSum -= 1;
            if(mp.find(currSum) != mp.end())
            {
                res= max(res , i-mp[currSum]);
            }
            else
            mp[currSum] = i;
        }
         
         return res;
    }
};
