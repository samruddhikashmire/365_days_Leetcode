//  169. Majority Element

// BRUTE FORCE 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int ans =0;

        unordered_map<int,int>m;
        for(int x : nums)
        {
            m[x]++;
        }
        for(const auto& x : m)
        {
            if(x.second > n/2)
            {ans = x.first;
            break;
            }
        }
        return ans;
            
        }
    
};


//EFFICICENT MOORES VOTING ALGORITHM
class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n = nums.size();
        int ele ; 
        int count =0;
        for(int i=0;i<n;i++)
        {
            if(count==0)
            {
                count=1;
                ele = nums[i];
            }
            else if (nums[i]==ele)
            count++;
            else 
            count--;
        }
        int c=0;
        for(int i=0;i<n;i++)
        {

            if(ele == nums[i])
            c++;
            if(c>=n/2)
            return ele;
        }
        return -1;
        
    }
    
};
