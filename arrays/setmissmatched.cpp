#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();

        int missing = 0;
        int dupe = 0;

        for (int j = 0; j < n; j++) {
            int counter = 0;

            for (int i = 0; i < n; i++) {
                if (nums[i] == j + 1) {
                    counter++;
                }
            }

            if (counter == 0) {
                missing = j + 1;
            }

            if (counter == 2) {
                dupe = j + 1;
            }
        }

        return {dupe, missing};
    }
};
int main () {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution sol;
    vector<int> result = sol.findErrorNums(nums);

    cout << "Duplicate: " << result[0] << ", Missing: " << result[1] << endl;

    return 0;
}