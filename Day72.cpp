// 349. Intersection of Two Arrays
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin() , nums1.end());
        sort(nums2.begin() , nums2.end());
        vector<int>ans;
        int i=0,j=0;
        int n = nums1.size();
        int m = nums2.size();
        while(i<n && j<m)
        {
            int c=0;
            if(nums1[i]==nums2[j])
            {
                 c =  count(ans.begin() , ans.end() , nums1[i]);
                 if(c==0)
                 {
                ans.push_back(nums1[i]);
                 }
                i++;
                j++;
            }
            else if (nums1[i] < nums2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        return ans;
            

    }
};
