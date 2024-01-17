/*
Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.
*/
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map <int,int> mapp;
        for(int x : arr)
        mapp[x]++;
        
         std::set<int> countSet;

    for (const auto& pair : mapp) {
        int count = pair.second;
        if (countSet.find(count) != countSet.end()) {
            return false;
        }

        countSet.insert(count);
    }
    return true;

    }
};
