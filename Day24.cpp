/* 
You are given an array of integers nums of length n.

The cost of an array is the value of its first element. For example, the cost of [1,2,3] is 1 while the cost of [3,4,1] is 3.

You need to divide nums into 3 disjoint contiguous subarrays.

Return the minimum possible sum of the cost of these subarrays.
  */
class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        if(n==3){
            for(int i=0;i<n;i++)
            {
                sum+=nums[i];
            }
            return sum ;
        
    }
        int ans = INT_MAX;
        int cost = nums[0];
        for(int j=1 ; j<n ; j++)
        {
            cost += nums[j];
            for(int k=j+1 ; k<n ; k++)
            { 
                cost+= nums[k];
                ans = min(ans , cost);
                cost -= nums[k];
            }
            cost -= nums[j];
        }
        return ans;
    }
};
