//Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int count=0;
        vector<int>arr;
        int n=nums.size();
        for(int i=0;i<n+1;i++)
        {
            arr.push_back(i);
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=nums[i])
            {
            count=i;
            break;
            }
        }
        if (count == 0 && arr[n] != nums[n - 1]) {
            count = n;
        }
        return count;
    }
};
