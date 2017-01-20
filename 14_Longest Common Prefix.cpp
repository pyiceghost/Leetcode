/*
Write a function to find the longest common prefix string amongst an array of strings. 
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result="";
        if(strs.size() == 0) return result;
        for(int j=0;j<strs.size();j++)
        if(strs[j] == "") return result;
        for(int i=0;i<strs[0].size();i++)
        {
            
            for(int j=1;j<strs.size();j++)
            {
               
            if(((strs[j][i] != strs[j-1][i]) ) || i>=strs[j-1].size())
            return result;
            }
            result+=strs[0][i];
        }
        return result;
    }
};