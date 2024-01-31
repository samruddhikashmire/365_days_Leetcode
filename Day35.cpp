/*
Given an integer array nums, find the 
subarray
 with the largest sum, and return its sum.
  */
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int res = nums[0];
    int maxend = nums[0];
    for(int i=1;i<nums.size();i++)
    {
        maxend = max(nums[i] , maxend+nums[i]);
        res = max(res , maxend);
    }
    if(nums.size()==1)
    return nums[0];
    else
    return res;
    }
};
