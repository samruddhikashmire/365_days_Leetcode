/*
You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

You are given an integer array nums representing the data status of this set after the error.

Find the number that occurs twice and the number that is missing and return them in the form of an array.
  */

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map <int , int > mapp;
        int n = nums.size();
        for(int i=1 ; i<=n ; i++)
            mapp[i]++;
        
        for(auto a: nums)
            mapp[a]--;

        int dup = 0 , missing=0;
        for(auto a: mapp)
        {
            if(a.second == -1)
            dup = a.first;
            if(a.second == 1)
            missing = a.first;
        }

        return {dup , missing};
         

    }
};
