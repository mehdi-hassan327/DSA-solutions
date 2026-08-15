#include <iostream>
#include <vector>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
    int n = nums.size();

    vector<int> seen(n + 1, 0);
    vector<int> result;

    // Mark numbers that exist
    for (int i = 0; i < n; i++) {
        seen[nums[i]] = 1;
    }

    // Find numbers that don't exist
    for (int i = 1; i <= n; i++) {
        if (seen[i] == 0) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = findDisappearedNumbers(nums);

    cout << "Missing numbers: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    cout << endl;

    return 0;
}