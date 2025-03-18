#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
  public:
    bool isAnagram(string s, string t) {
      if (s.size() != t.size()) {
        return false;
      }
      unordered_map<char, int> sCount;
      unordered_map<char, int> tCount;

      for (int i = 0; i < s.size(); ++i) {
        sCount[s[i]]++;
        tCount[t[i]]++;
      }

      return sCount == tCount;
    }
};

int main() {
  Solution s1;
  string s = "racecar", t = "carrace";

  cout << "'" << s << "' is an anagram of '" << t << "' ";
  cout << ((s1.isAnagram(s, t)) ? "Yes" : "No") << endl;
  return 0;
}