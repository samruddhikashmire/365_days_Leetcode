// 
class Solution {
public:
    int check(vector<int>&a , int mid)
    {
        int k = 1;
        long c = 0;
        for(int i=0;i<a.size();i++)
        {
            if(c+a[i] <= mid)
              c += a[i];
            else
              {
                  k++;
                  c = a[i];
              }
        }
        return k;

    }
    int splitArray(vector<int>& nums, int k) {
        int l = *max_element(nums.begin() , nums.end());
        int h = accumulate(nums.begin() , nums.end() , 0);
        while(l<=h)
        {
            int mid = (l+h)/2;
            int val = check(nums,mid);
            if(val > k)
            l = mid +1;
            else
            h = mid - 1;
            
        }
        return l;
    }
};
