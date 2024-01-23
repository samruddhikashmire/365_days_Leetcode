/*
You are given a string s of even length. Split this string into two halves of equal lengths, and let a be the first half and b be the second half.

Two strings are alike if they have the same number of vowels ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'). Notice that s contains uppercase and lowercase letters.

Return true if a and b are alike. Otherwise, return false.
  */
class Solution {
public:
    bool vowel(char s)
    {
        if ((s == 'a' || s == 'A') ||
        (s == 'e' || s == 'E') ||
        (s == 'i' || s == 'I') ||
        (s == 'o' || s == 'O') ||
        (s == 'u' || s == 'U'))
        {return true;}
    return false;
    }
    bool halvesAreAlike(string s) {
        int n = s.size();
        int count1 =0 , count2=0;
        for(int i = 0; i<n/2;i++)
        {
               if(vowel(s[i]))
               count1 ++;
        }
        for(int i=n/2 ; i<n;i++)
        {
            if(vowel(s[i]))
            count2++;
        }

        if(count1 == count2)
        return true;
        else
        return false;
    }
};
