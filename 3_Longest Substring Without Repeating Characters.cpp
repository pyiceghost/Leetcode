/*
Given a string, find the length of the longest substring without repeating characters.

Examples:

Given "abcabcbb", the answer is "abc", which the length is 3.

Given "bbbbb", the answer is "b", with the length of 1.

Given "pwwkew", the answer is "wke", with the length of 3. Note that the answer must be a substring, "pwke" is a subsequence and not a substring.
*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     int max = 0;
     int max_tmp = 0;
     int past = -1;
     int tmp[256] = {-1};
       for(int i = 0; i < 256; ++i) {
                tmp[i] = -1;
            }
     for(int i = 0; i < s.length(); i++)
     {

         if (tmp[s[i]] == -1 || past >= tmp[s[i]])
         {
            tmp[s[i]] = i;
            ++max_tmp;

         }
         else
         {

            if (max < max_tmp) max = max_tmp;

            max_tmp = i - tmp[s[i]] ;
            past = tmp[s[i]];
            tmp[s[i]] = i;
         }

     }

      if (max < max_tmp) max = max_tmp;
     return max;
    }
};