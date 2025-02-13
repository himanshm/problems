#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
  int maxSumSubArrayUsingDeque(const vector<int>& nums, int k) {
    int n = nums.size();
    if (n < k) return -1;

    deque<int> dq;
    int sum = 0;

    // Sum of first k elements
    for (int i = 0; i < k; ++i) {
      sum += nums[i];
      dq.push_back(nums[i]);
    }

    int maxSum = sum;
    // Sliding window using queue
    for (int i = k; i < n; ++i) {
      // add current element to the sum and remove first one
      sum += nums[i] - dq.front();
      // Remove the first element from the queue
      dq.pop_front();
      // Add New Element at the back of the queue
      dq.push_back(nums[i]);

      maxSum = max(sum, maxSum);
    }
    return maxSum;
  }
};

int main() {
  Solution sol;
  vector<int> arr = {1, 4, 2, 10, 2, 3, 1, 0, 20};
  int k = 4;

  cout << "Maximum sum using deque: " << sol.maxSumSubArrayUsingDeque(arr, k) << endl;
  return 0;
}
