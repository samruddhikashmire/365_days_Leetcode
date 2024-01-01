//Check whether a given number ’n’ is a palindrome number.
class Solution {
public:
    bool isPalindrome(int n) {
    int last_digit = 0;
    long int  rev = 0;
    int x=n;
    while(x>0)
    {
        last_digit = x % 10;
        rev = (rev * 10 ) + last_digit;
        x = x/10;
        
    }
    if(n==rev)
    return true;
    else
    return false;
    }
};
