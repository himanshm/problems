#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
    vector<int> getConcatenation(vector<int>& nums) {
      int n = nums.size();
      vector<int> ans(2*n);

      for (int i = 0; i < n; ++i) {
          ans[i] = ans[i + n] = nums[i];
      }
      return ans;
    }
};

int main() {
  Solution s1;
  vector<int> nums = {1, 2, 4, 5};
  vector<int> result = s1.getConcatenation(nums);
  cout << "Concatenated array: ";
  for (int num: result) {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}