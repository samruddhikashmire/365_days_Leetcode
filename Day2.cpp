//Given a binary array nums, return the maximum number of consecutive 1's in the array.
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int limit=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                count++;
                limit=max(limit,count);
            }
            
            else
            {
               count=0;
            }
            

        }
        return limit;
    }
};
