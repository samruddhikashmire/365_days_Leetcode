/*
Given a string input of length n, find the length of the longest substring without repeating characters i.e return a substring that does not have any repeating characters.

Substring is the continuous sub-part of the string formed by removing zero or more characters from both ends.
  */
#include <bits/stdc++.h> 
int uniqueSubstrings(string s)
{
    vector < int > mpp(256, -1);

      int left = 0, right = 0;
      int n = s.size();
      int len = 0;
      while (right < n) {
        if (mpp[s[right]] != -1)
          left = max(mpp[s[right]] + 1, left);

        mpp[s[right]] = right;

        len = max(len, right - left + 1);
        right++;
      }
      return len;
    
}
