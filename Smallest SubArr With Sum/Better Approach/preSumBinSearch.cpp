#include <iostream>
#include <vector>
#include <climits>

using namespace std;

pair<int, vector<int>> smallestSubWithSum(int x, const vector<int>& arr) {
  int n = arr.size();
  int res = INT_MAX, startIdx = -1, endIdx = -1;
  vector<int> preSum (n + 1, 0);

  // Compute prefix sums
  for (int i = 1; i <= n; ++i) {
    preSum[i] = preSum[i - 1] + arr[i - 1];
  }

  // Iterate through each starting index
  for (int i = 1; i <= n; ++i) {
    int toFind = x + preSum[i - 1];

     // Find first prefix sum >= toFind using binary search
     auto bound = lower_bound(preSum.begin(), preSum.end(), toFind);

     // lower_bound() finds the first element >= toFind
     // which means it could return an exact match that doesn't always work.
     // so either add a comparison in the if condition below adding && or
     // add +1 to toFind to avoid exact matches
     if (bound != preSum.end() && *bound != toFind) {
      int j = bound - preSum.begin(); // Convert iterator into index
      int len = j - (i - 1);
      if (len < res) {
        res = len;
        startIdx = i - 1;
        endIdx = j - 1;
        // j = bound - preSum.begin(); → j is the index in preSum where the first valid prefix sum is found.
        // preSum[j] represents the prefix sum up to j - 1 in the original arr (because preSum is 1-based).
        // Thus, endIdx = j - 1 correctly points to the last index in arr where the subarray ends.
      }
    }
  }
  if (res == INT_MAX) {
    return { 0, {} };
  }
  return {res, vector<int>(arr.begin() + startIdx, arr.begin() + endIdx)};
}

int main() {
    vector<int> arr = {2, 3, 1, 2, 4, 3};
    int x = 7;

    auto result = smallestSubWithSum(x, arr);
    cout << "Smallest subarray length: " << result.first << endl;
    cout << "Smallest subarray: ";
    for (int num : result.second) cout << num << " ";

    return 0;
}
