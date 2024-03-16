

class Solution {
public:
    int digit(int n) {
        std::vector<int> d;
        int temp = n;
        int count = 0;
        while (temp > 0) {
            int last = temp % 10;
            d.push_back(last);
            temp = temp / 10;
            count++;
        }
        int maxi = *std::max_element(d.begin(), d.end());
        std::string ans = "";
        for (int i = 0; i < count; i++) {
            ans.push_back('0' + maxi); 
        }
        int b = std::stoi(ans);
        return b;
    }

    int sumOfEncryptedInt(std::vector<int>& nums) {
        std::vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            int ele = digit(nums[i]);
            ans.push_back(ele);
        }
        int a = std::accumulate(ans.begin(), ans.end(), 0);
        return a;
    }
};
