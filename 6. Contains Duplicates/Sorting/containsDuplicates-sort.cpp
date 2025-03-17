#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
  public:
    bool containsDuplicates(vector<int>& nums) {
      sort(nums.begin(), nums.end());
      for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] == nums[i - 1]) {
          return true;
        }
      }
      return false;
    }
};

int main() {
  Solution s1;
  vector<int> nums = {1, 2, 4, 1};
  cout << "[ ";
  for (int num: nums) {
    cout << num << " ";
  }
  cout << "]";
  cout << " contains duplicates: " << s1.containsDuplicates(nums);
  cout << endl;
  return 0;
}
