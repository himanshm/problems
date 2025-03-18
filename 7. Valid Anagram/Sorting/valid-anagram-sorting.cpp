#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
  public: 
    bool isAnagram(string s, string t) {
      if (s.length() != t.length()) {
        return false;
      }
      sort(s.begin(), s.end());
      sort(t.begin(), t.end());

      return s == t;
    }
};

int main() {
  Solution s1;
  string s = "racecar", t = "carrace";

  cout << "'" << s << "' is an anagram of '" << t << "' ";
  cout << ((s1.isAnagram(s, t)) ? "Yes" : "No") << endl;

  return 0;
}