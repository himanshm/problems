#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

long long maximumSubarraySum(const vector<int>& nums, int k) {
  int maxSum = 0, sum = 0;
  int left = 0;
  unordered_set<int> windowSet;

  for (int right = 0; right < nums.size(); ++right) {
    while (windowSet.count(nums[right])) {
      windowSet.erase(nums[left]);
      sum -= nums[left];
      ++left;
    }

    windowSet.insert(nums[right]);
    sum += nums[right];

    if (right - left + 1 > k) {
      windowSet.erase(nums[left]);
      sum -= nums[left];
      ++left;
    }

    if (right - left + 1 == k) {
      maxSum = max(maxSum, sum);
    }
    return maxSum;
  }
}
