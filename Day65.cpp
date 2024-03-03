// 1011. Capacity To Ship Packages Within D Days
class Solution {
public:
    int day(vector<int>& weights , int cap)
    {
        int da = 1;
        int load = 0;
        for(int i=0;i<weights.size() ; i++)
        {
            if(load + weights[i] > cap)
            {
                da +=1;
                load = weights[i];
            }
            else
              load += weights[i];
        }
        return da;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(), weights.end());
        int h = accumulate(weights.begin() , weights.end() , 0);
        while(l<=h)
        {
            int mid = (l+h)/2;
            int val = day(weights, mid);
            if(val <= days)
            h = mid -1;
            else
            l = mid + 1 ;
        }
        return l;
    }
};
