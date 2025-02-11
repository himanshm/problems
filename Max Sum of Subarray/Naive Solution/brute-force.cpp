#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
  public:
  int maxSumSubArr(const vector<int>& arr, int k) {
    int maxSum = INT_MIN;
    int n = arr.size();

    for (int i = 0; i < n - k + 1; ++i) { // or i <= n - k
      int sum = 0;
      for (int j = i; j < i + k; ++j) {
        sum += arr[j];
      }
      maxSum = max(maxSum, sum);
    }
    return maxSum;
  }
};

int main() {
  Solution sol;
  vector<int> arr = { 1, 4, 2, 10, 2, 3, 1, 0, 20 };
  int k = 4;
  int result = sol.maxSumSubArr(arr, k);
  cout << "Maximum sum of subarray of size " << k << " is: " << result << endl;

  return 0;
}
