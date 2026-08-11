#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         for(int i=0;i<nums.size();i++)
         {
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target && i != j)
                {
                     return {i,j};
                }
            }
            
         }
         return {};
    }
};
int main(void)
{
    Solution s;
    cout<<"Enter the size of the array: ";
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cout<<"Enter the target: ";
    int target; 
    cin>>target;
    vector<int> result = s.twoSum(nums, target);
}