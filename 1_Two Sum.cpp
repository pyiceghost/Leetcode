#include<iostream>
#include <vector>
using namespace std;
 vector<int> twoSum(vector<int>& nums, int target)
  {
        
        for (int i = 0; i < nums.size(); i++)
            for (int j = 0; j < nums.size(); j++)
            if ((nums[i] + nums [j]) == target && i != j)
            {
            vector<int> num;
            num.push_back(i);
            num.push_back(j);
            return num;
            }
            
            
  }
int main()
{
	 vector<int> num;
	num.push_back(3);
	num.push_back(2);
	num.push_back(4);
	cout << num.size();
	num = twoSum(num,6);
	cout << "Hello World" << endl;
	cout << num.at(0) << num.at(1);
	return 0;
}