// 3080
#include <vector>
#include <queue>
#include <algorithm> // for accumulate
#include <numeric>   // for accumulate

using namespace std;

class Solution {
public:
    vector<long long> unmarkedSumArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<long long> ans;
        priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> pq; 
        int n = nums.size();
        long long sum = accumulate(nums.begin(), nums.end(), 0LL);
        for (int i = 0; i < n; i++) {
           pq.push({nums[i], i});
        }
        
        
    for(auto q: queries){
        sum -= nums[q[0]];
        nums[q[0]] = 0;
        while(pq.size() && q[1]){
            if(nums[pq.top().second]){ 
                sum -= nums[pq.top().second];  
                nums[pq.top().second] = 0; 
                q[1]--; 
            }
            pq.pop();
        }
        ans.push_back(sum);
    }
        
        return ans;
    }
};
