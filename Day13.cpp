/*
A digit string is good if the digits (0-indexed) at even indices are even and the digits at odd indices are prime (2, 3, 5, or 7).
For example, "2582" is good because the digits (2 and 8) at even positions are even and the digits (5 and 2) at odd positions are prime. However, "3245" is not good because 3 is at an even index but is not even.
Given an integer n, return the total number of good digit strings of length n. Since the answer may be large, return it modulo 109 + 7.
A digit string is a string consisting of digits 0 through 9 that may contain leading zeros.
*/

#define mod 1000000007
class Solution {
public:
   long poww(long x , long n )
   {
       if(n==0) return 1;
       long temp = poww(x , n/2);

       if(n%2==0)
       {
           return (temp * temp)%mod;
       }
       else
       return (x*temp*temp)%mod;
   }
    int countGoodNumbers(long long n) {
        long even = (n+1)/2;
        long odd = n/2;
        long first = poww(5 , even)%mod;
        long sec = poww(4 , odd)%mod;
        return (int)((first*sec)%mod);
    }
};
