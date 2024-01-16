/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int , int> mapp;
        for(int i=0 ; i <nums.size() ; i++)
        {
            int a = nums[i];
            int ele = target - a ;
            if(mapp.find(ele) != mapp.end())
            {
                return {mapp[ele] , i};
            }
            mapp[a] = i;
        }
        return {-1 , -1};
    }
};
