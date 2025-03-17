#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
    vector<int> getConcatenation(vector<int>& nums) {
      vector<int> ans;
      for (int i = 0; i < 2; ++i) {
        for (int num: nums) {
          ans.push_back(num);
        }
      }
      return ans;
    }
};

int main() {
  Solution s1;
  vector<int> nums = {1, 2, 4, 3};
  vector<int> result = s1.getConcatenation(nums);
  cout << "Concatenated array: ";
  for (int num: result) {
    cout << num << " ";
  }
  cout << endl;
  return 0;
}
