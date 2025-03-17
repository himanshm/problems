#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
  public:
    bool containsDuplicates(vector<int>& nums) {
      unordered_set<int> hash_set;
      for (int i = 0; i < nums.size(); ++i) {
        if (hash_set.count(nums[i])) {
          return true;
        }
        hash_set.insert(nums[i]);
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
