/*
You are given an array nums consisting of positive integers.

Return the total frequencies of elements in nums such that those elements all have the maximum frequency.

The frequency of an element is the number of occurrences of that element in the array.
  */

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map < int , int > mapp;
        for(int x : nums)
            mapp[x]++;
        int max = 0 ;
        int count=0 ;
        int total=0;
        for(const auto& pair : mapp)
        {
            if(pair.second > max)
                max = pair.second;
            
            
        }
        
        for(const auto& pair : mapp)
        {
            if(pair.second == max)
                count++;
        }
        
        total = max + max*(count-1);
        if (max == 1)
           return nums.size();
        
        return total;
    }
};
