/*
You are given a 0-indexed integer array nums and an integer threshold.

Find the length of the longest subarray of nums starting at index l and ending at index r (0 <= l <= r < nums.length) that satisfies the following conditions:

nums[l] % 2 == 0
For all indices i in the range [l, r - 1], nums[i] % 2 != nums[i + 1] % 2
For all indices i in the range [l, r], nums[i] <= threshold
Return an integer denoting the length of the longest such subarray.

Note: A subarray is a contiguous non-empty sequence of elements within an array.
*/

class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int n = nums.size();
        int ans =0;
        for(int i=0;i<n;i++)
        {
            int curr=0;
            if(nums[i]%2==0 && nums[i]<=threshold)
            {
                curr=1;
                for(int j=i+1 ; j<n;j++)
                {
                    if(nums[j]>threshold || nums[j-1]%2 == nums[j]%2)
                      break;
                    curr++;
                }
                ans = max(ans,curr);
            }
        }
        return ans;
      
        

      
      

    }
};
