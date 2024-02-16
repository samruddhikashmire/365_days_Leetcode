// 75. Sort Colors
class Solution {
public:
    void sortColors(vector<int>& nums) {
       int l =  0;
       int mid = 0;
       int h = nums.size()-1;
       for(int i=0;i<nums.size();i++)
       {
           if(nums[mid] == 0)
           {
               swap(nums[l] , nums[mid]);
               l++;
               mid++;
           }
           else if (nums[mid] == 1)
           {
               mid++;
           }
           else
           {
               swap(nums[h] , nums[mid]);
               h--;
           }
       }
    }
};
