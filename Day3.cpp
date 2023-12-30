//Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

//You must implement a solution with a linear runtime complexity and use only constant extra space.
int singleNumber(vector<int>& nums) 
    {
        unordered_map <int,int>freq;
	for(int i=0;i<nums.size();i++)
	{
		freq[nums[i]]++;
	}
	for (const auto& x : freq)
	{
        if (x.second != 2) 
         {return x.first ;}
        
    }
    return -1;
    }
