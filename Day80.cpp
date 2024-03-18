// 35. Search Insert Position
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int h = n-1 ;
        while(l<=h)
        {
            int mid = (l+h)/2;
            if(nums[mid] == target)
            return mid;
            if(nums[mid] < target)
             l = mid +1;
            else
             h = mid - 1;
        
        }
        return l;
    }
};
