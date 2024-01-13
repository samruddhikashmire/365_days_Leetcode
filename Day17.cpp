/* You are given two strings of the same length s and t. In one step you can choose any character of t and replace it with another character.

Return the minimum number of steps to make t an anagram of s.

An Anagram of a string is a string that contains the same characters with a different (or the same) ordering.*/

class Solution {
public:
    int minSteps(string s, string t) {
       unordered_map<char , int>sm;
       unordered_map<char , int>tm;
       int count =0;
       for( auto a : s)
       sm[a]++;
       for( auto a : t)
       tm[a]++;

      for( auto a : sm) 
      {
          if(tm.find(a.first) != tm.end())
          {
              if(sm[a.first] == tm[a.first])
              {
                  count += sm[a.first];
              }
              else 
              {
                 count+= min(sm[a.first], tm[a.first]);
              }
          }
      }

      return s.size() - count;     



    }
};
