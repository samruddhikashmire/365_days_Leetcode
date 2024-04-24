class Solution {
public:
    void print(int idx , vector<int>& candidates,vector<vector<int>>&ans , int target , vector<int>v)
   
    {
         int n = candidates.size();
        if(idx == n)
        {
            if(target == 0)
               ans.push_back(v);
            return;
        }

        if(candidates[idx] <= target)
        {
            v.push_back(candidates[idx]);
            print(idx , candidates , ans ,target - candidates[idx] , v );
            v.pop_back();
        }
            print(idx+1 , candidates , ans ,target , v );

        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        int n = candidates.size();
        print(0 , candidates , ans , target  , v);
        return ans;
    }
};
