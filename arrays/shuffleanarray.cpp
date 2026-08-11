#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> out(2*n);
        int k=0;
        for(int i=0;i<2*n;i++)
        {
            if(i%2==1)
            {
                out[i]=nums[n+k];
                k++;
            }
            else
            {
                out[i]=nums[i-k];
            }
        }
        return out;
    }
};
int main(void)
{
    Solution s;
    cout<<"Enter the size of the array: ";
    int n;
    cin>>n;
    vector<int> nums(2*n);
    for(int i=0;i<2*n;i++)
    {
        cin>>nums[i];
    }
    vector<int> result = s.shuffle(nums, n);
    for(int i=0;i<2*n;i++)
    {
        cout<<result[i]<<" ";
    }
  return 0;
}