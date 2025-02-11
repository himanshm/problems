#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
  int maxSumSubArray(const vector<int>& nums, int k) {
    int n = nums.size();
    // k must be smaller than n
    if (n < k) return -1;

    int maxSum = 0;
    // Compute sum of first window of size k
    for (int i = 0; i < k; ++i) {
      maxSum += nums[i];
    }

    // Compute sums of remaining windows by
    // removing first element of previous
    // window and adding last element of
    // current window.
    int windowSum = maxSum;
    for (int i = k; i < n; ++i) {
      windowSum += nums[i] - nums[i - k];
      if (windowSum > maxSum) {
        maxSum = windowSum;
      }
    }
    return maxSum;
  }
};

int main() {
  Solution sol;
  vector<int> arr = {1, 4, 2, 10, 2, 3, 1, 0, 20};
  int k = 4;

  cout << "Maximum sum using sliding window: " << sol.maxSumSubArray(arr, k) << endl;
  return 0;
}
