#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
    bool isAnagram(string s, string t) {
      if (s.length() != t.length()) {
        return false;
      }
      vector<int> count(26, 0);
      for (size_t i = 0; i < s.length(); i++)
      {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
      }
      for(int val: count) {
        if (val != 0) {
          return false;
        }
      }
      return true;
    }
};

int main() {
  Solution s1;
  string s = "racecar", t = "carrace";

  cout << "'" << s << "' is an anagram of '" << t << "' ";
  cout << ((s1.isAnagram(s, t)) ? "Yes" : "No") << endl;
  return 0;
}
