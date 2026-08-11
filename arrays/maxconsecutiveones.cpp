#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int max = 0;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                count++;
            } else {
                count = 0;
            }
            if (count > max) {
                max = count;
            }
        }
        return max;
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
    int result = s.findMaxConsecutiveOnes(nums);
    cout<<"The maximum number of consecutive 1's is: "<<result<<endl;
  return 0;
}