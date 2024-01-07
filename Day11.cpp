/*
You are given a 0-indexed array of integers nums.

A prefix nums[0..i] is sequential if, for all 1 <= j <= i, nums[j] = nums[j - 1] + 1. In particular, the prefix consisting only of nums[0] is sequential.

Return the smallest integer x missing from nums such that x is greater than or equal to the sum of the longest sequential prefix.
*/

class Solution {
public:
    int missingInteger(vector<int>& nums) 
    {
        int sum=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]+1 == nums[i])
             sum += nums[i];
            else
             break;
        }
        sort(nums.begin() , nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(sum == nums[i])
            {
                sum++;
            }
        }
        return sum;
    }
    
};
