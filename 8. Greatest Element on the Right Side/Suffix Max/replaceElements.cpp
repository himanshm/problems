#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        int rightMax = -1;

        for (int i = n - 1; i >= 0; --i) {
          ans[i] = rightMax;
          rightMax = max(rightMax, arr[i]);
        }
        return ans;
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
