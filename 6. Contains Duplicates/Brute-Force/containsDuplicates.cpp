#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
    bool containsDuplicates(vector<int>& nums) {
      int n = nums.size();
      for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
          if (nums[j] == nums[i]) {
            return true;
          }
        }
      }
      return false;
    }
};

int main() {
  Solution s1;
  vector<int> nums = {1, 2, 3, 1};
  cout << "[ ";
  for (int num: nums) {
    cout << num << " ";
  }
  cout << "]";
  cout << " contains duplicates: " << s1.containsDuplicates(nums);
  cout << endl;
  return 0;
}

