// 69. Sqrt(x)
class Solution {
public:
    int mySqrt(int x) {
        int l =0;
        int h = x;
        while(l<=h)
        {
            long long mid = (l+h)/2;
            long long val = (mid * mid);
            if(val <= x)
            {
               
                l = mid + 1;
            }
            else
            {
                h = mid -1;
            }
        }
        return h;

    }
};


// 875. Koko Eating Bananas
class Solution {
public:
int findMax(vector<int> &v) {
    int maxi = INT_MIN;
    int n = v.size();
    //find the maximum:
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, v[i]);
    }
    return maxi;
}
int check(int mid , vector<int>& p , int h)
{
     int ans =0;
     for(int i=0;i<p.size();i++)
     {
         ans += ceil((double)(p[i]) / (double)(mid));
         if(ans > h)
         break;
     }
     return ans;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int l = 1 ;
        int high = findMax(piles);
        while(l<=high)
        {
            int mid = (l+high)/2;
            int val = check(mid , piles , h);
            if(val <= h)
              high = mid - 1;
            else
              l = mid + 1 ;
        }
        return l;
    }
};
