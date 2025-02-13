#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

long long maxDistictSubarrSum(const vector<int>& nums, int k) {
  int n = nums.size();
  int maxSum = 0;

  for (int i = 0; i <= n - k; ++i) {
    unordered_set<int> subArr;
    int sum = 0;
    bool isValid = true;

    for (int j = i; j < i + k; ++j) {
      if (subArr.count(nums[j])) {
        isValid = false;
        break;
      }
      subArr.insert(nums[j]);
      sum += nums[j];
    }

    if (isValid) {
      maxSum = max(maxSum, sum);
    }
  }
  return maxSum;
}
