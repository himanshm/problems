#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
    vector<int> replaceElements(vector<int>& arr) {
      int n = arr.size();
      vector<int> result(n);
      for (int i = 0; i < n; i++) {
        int rightMax = -1;
        for (int j = i + 1; j < n; j++) {
          rightMax = max(rightMax, arr[j]);
        }
        result[i] = rightMax;
      }
      return result;
    }
};

int main() {
  Solution solution;
  vector<int> arr = {17, 18, 5, 4, 6, 1};
  vector<int> result = solution.replaceElements(arr);
  for (int i : result) {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}
