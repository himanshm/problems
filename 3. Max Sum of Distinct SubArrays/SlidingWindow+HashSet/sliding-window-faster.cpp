#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

class Solution {
  public:
      static long long maximumSubarraySum(const vector<int>& nums, int k) {
          long long maxSum = 0, sum = 0;
          int left = 0;
          bitset<100001> inArr;

          for (int right = 0; right < nums.size(); ++right) {
              while (inArr[nums[right]]) {
                  inArr[nums[left]] = 0;
                  sum -= nums[left];
                  ++left;
              }

              inArr[nums[right]] = 1;
              sum += nums[right];

              if (right - left + 1 > k) {
                  inArr[nums[left]] = 0;
                  sum -= nums[left];
                  ++left;
              }

              if (right - left + 1 == k) {
                  maxSum = max(maxSum, sum);
              }
          }
          return maxSum;
      }
  };

  auto init = []() {
      ios::sync_with_stdio(false);
      cin.tie(nullptr);
      cout.tie(nullptr);
      return 'c';
  };
