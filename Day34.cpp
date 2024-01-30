class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    map <int,int>m;
	int ans;
	for(int x : nums)
	{
		m[x]++;
	}
	for(const auto &x : m)
	{
		if(x.second > 1)
		ans = x.first;
	}
    return ans;
}
    
};


/*Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.
  */
