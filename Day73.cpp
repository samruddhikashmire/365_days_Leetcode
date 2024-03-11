// 3075. Maximize Happiness of Selected Children
class Solution {
public:
    
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        int n = happiness.size();
        priority_queue<int>pq;
        for(int x : happiness)
        {
            pq.push(x);
        }
        int count=0;
        long long sum=0;
        while(k>0 && !pq.empty())
        {
            int m = pq.top();
            pq.pop();
            if(m-count>=0)
            {
               sum = sum + (m-count);
               k--;
               count++;
            }
               
        }
        return sum;
        
    }
};
