/*
Given an array S of n integers, are there elements a, b, c in S such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

Note: The solution set must not contain duplicate triplets.

For example, given array S = [-1, 0, 1, 2, -1, -4],

A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
]
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       vector<vector<int>> result;
        
        for(int i=0;i<(nums.size()-2);i++)
            for(int j=(i+1);j<(nums.size()-1);j++)
                for(int k=(j+1);k<nums.size();k++)
                if((nums[i]+nums[j]+nums[k]) == 0)
                {
                    int t1=0,t2=0;
                    int min=nums[i],mid=nums[i],max=nums[i];
                    if(nums[j]<min) min=nums[j];
                     if(nums[k]<min) min=nums[k];
                      if(nums[j]>max) max=nums[j];
                       if(nums[k]>max) max=nums[k];
                       if(nums[i]!=min &&nums[i]!=max)mid=nums[i];
                       if(nums[j]!=min &&nums[j]!=max)mid=nums[j];
                       if(nums[k]!=min &&nums[k]!=max)mid=nums[k];
                       
                    vector<int> tmp;
                   tmp.push_back(min);
                    tmp.push_back(mid);
                     tmp.push_back(max);
                    result.push_back(tmp);
                }
                for(int i=0;i<(result.size()-1);i++)
                 for(int j=(i+1);j<result.size();j++)
                 if(result[i] == result[j])
                 {
                vector<vector<int>>::iterator   iter   =   result.begin()+j;
                 result.erase(iter);
                 }
                return result;
    }
};