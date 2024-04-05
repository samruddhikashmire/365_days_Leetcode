#include <string>
#include <cctype> // for isupper()

// 1544. Make The String Great
class Solution {
public:
    string makeGood(string s) {
        int n = s.length();
        if (n <= 1) // No need to process if string has length 0 or 1
            return s;
        
        bool hasUppercase = true;
        while (hasUppercase) {
            hasUppercase = false;
            int i = 0;
            while (i < n - 1) {
                int temp1 = int(s[i]);
                int temp2 = int(s[i + 1]);
                if (abs(temp1 - temp2) == 32) {
                    s.erase(i, 2); 
                    n = s.length(); 
                    hasUppercase = true;
                } else {
                    i++;
                }
            }
        }
        return s;
    }
};
