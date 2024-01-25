/*
Given a 0-indexed integer array nums, return true if it can be made strictly increasing after removing exactly one element, or false otherwise. If the array is already strictly increasing, return true.

The array nums is strictly increasing if nums[i - 1] < nums[i] for each index (1 <= i < nums.length).
*/
class Solution {
public:
    bool sorted_arr (vector<int>& nums)
    {
        for(int i=1 ; i <nums.size() ; i++)
        {
            if(nums[i-1] >= nums[i])
            return false;
        }
        return true;
    }
    bool canBeIncreasing(vector<int>& nums) {
       for(int i=0;i<nums.size();i++)
       {
           int rem = nums[i];
           nums.erase(nums.begin() + i);

           if(sorted_arr(nums))
           return true;

           nums.insert(nums.begin() + i, rem);


       }
       return false;
    }
};
