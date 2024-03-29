// Count Subarrays Where Max Element Appears at Least K Times
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxi = *max_element(nums.begin() , nums.end());
         int n = nums.size();
         int i=0,j=0,count=0;
         long long res=0;
         while(j<n)
         {
            if(nums[j] == maxi)
            {
                count++;
            }
            while(count>=k)
            {
                res += n-j;
                if(nums[i] == maxi)
                {
                    count--;
                }
                i++;
            }
            j++;

         }
         return res;
    }
};
