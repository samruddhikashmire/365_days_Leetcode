// 1283. Find the Smallest Divisor Given a Threshold
class Solution {
public:
    bool pattern(vector<int>v , int mid , int lim)
    {
        int sum = 0;
        for(int i=0;i<v.size();i++)
        {
            if(mid >= v[i])
            {
                sum += 1;
            }
            else
            {sum += ceil((double)(v[i]) / (double)(mid));}

        }
        return sum<=lim;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi = *max_element(nums.begin() , nums.end());
        int l = 1;
        int h = maxi;
        while(l<=h)
        {
            int mid = l + (h-l)/2;
            if(pattern(nums , mid , threshold))
            h = mid - 1;
            else
            l = mid + 1 ;
        }
        return l;
    }
};
