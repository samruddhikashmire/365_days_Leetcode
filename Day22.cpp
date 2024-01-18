/*
You are climbing a staircase. It takes n steps to reach the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
*/

class Solution {
public:
     int climb(int n , unordered_map<int,int>&mapp)
     {
         if(n==0 || n==1)
         return 1;

         if(mapp.find(n)==mapp.end())
         {
             mapp[n] = climb(n-1 , mapp) + climb(n-2 , mapp);
         }
         return mapp[n];
     }
    int climbStairs(int n) {
      unordered_map <int , int> mapp;
      return climb(n,mapp);
    }
};
