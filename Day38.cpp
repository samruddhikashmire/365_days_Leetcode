/*
27. Remove Element
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        int n = nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==val)
            count++;
        }
        int k = n - count;
        int i = 0 , j = n-1;
        while(i<j)
        {
            if(nums[i] == val)
            {
                if(nums[j]!=val)
                {
                    swap(nums[i] , nums[j]);
                    j--;
                    i++;
                }
                else
                j--;
            }
            else
            i++;
            
        }
        return k;
     
        
    }
};
