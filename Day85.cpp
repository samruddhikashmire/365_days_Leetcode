// 3091. Apply Operations to Make Sum of Array Greater Than or Equal to k
class Solution {
public:
    
    int minOperations(int k) {
       int minop = INT_MAX;
       for(int i=1;i<=k;i++)
       {
          int groups = ceil(k/(i*1.0));
          minop = min(minop , i-2 + groups);
       }
       return minop;
    }
};
