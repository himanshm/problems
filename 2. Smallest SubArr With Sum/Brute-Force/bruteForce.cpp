#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int smallestSubWithSum(int x, vector<int>& arr) {
  int n = arr.size();
  int res = INT_MAX;

  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = i; j < n; j++) {
      sum += arr[j];

      if (sum > x) {
        res = min(res, j - i + 1);
        break;
      }
    }
  }

  if (res == INT_MAX) {
    return 0;
  }
  return res;
}

int main() {
    vector<int> arr = {1, 4, 45, 6, 10, 19};
    int x = 51;

    cout << smallestSubWithSum(x, arr);

    return 0;
}
