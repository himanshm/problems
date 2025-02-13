#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int smallestSubWithSum(int x, const vector<int>& arr) {
  int n = arr.size();
  int left = 0, windowSum = 0, minLen = INT_MAX;

  for (int right = 0; right < n; ++right) {
    // Expand the window until windowSum <= x
    windowSum += arr[right];

    while (windowSum > x) {
      int len = right - left + 1;
      minLen = min(minLen, len);
      // Shrink the window
      windowSum -= arr[left++];
      // window = [left, right];
    }
  }
  return (minLen == INT_MAX) ? 0 : minLen;
}

int main() {
    vector<int> arr = {1, 4, 45, 6, 10, 19};
    int x = 51;

    int result = smallestSubWithSum(x, arr);
    cout << result << endl;
    return 0;
}
