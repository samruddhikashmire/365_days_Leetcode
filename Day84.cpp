// 713. Subarray Product Less Than K
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        if(k<=1)
        return 0;

        int prod=1 , res = 0 , left = 0;
        for(int r=0;r<n;r++)
        {
            prod*=nums[r];
            while(prod >= k)
            {
                prod /= nums[left];
                left++;
            }
            res += r-left+1;
        }
        return res;
        }
    
};
