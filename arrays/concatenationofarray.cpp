#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans(2 * n);

        int i = 0, j = 0;

        while (i <= n && j < 2 * n)
        {
            if (i == n)
            {
                i = 0;
            }
            else
            {
                ans[j] = nums[i];
                i++;
                j++;
            }
        }

        return ans;
    }
};
int main(void)
{
    Solution s;
    cout<<"Enter the size of the array: ";
    int n;
    cin>>n;
    cout<<"Enter the elements of the array: ";
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    vector<int> result = s.getConcatenation(nums);
    for(int i=0;i<2*n;i++)
    {
        cout<<result[i]<<" ";
    }
  return 0;
}