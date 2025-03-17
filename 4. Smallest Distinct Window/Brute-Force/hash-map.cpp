#include <iostream>
#include <unordered_set>
#include <climits>

using namespace std;

string findSubString(string str) {
  int n = str.length();
  unordered_set<char> unique_chars(str.begin(), str.end());
  int dist_count = unique_chars.size();

  int min_size = INT_MAX;
  string result;

  for (int i = 0; i < n; ++i) {
    unordered_set<char> visited;
    string sub_str = "";

    for (int j = i; j < n; ++j) {
      visited.insert(str[j]);
      sub_str += str[j];

      if (visited.size() == dist_count) {
        break;
      }
    }

    if (sub_str.length() < min_size && visited.size() == dist_count) {
      result = sub_str;
      min_size = sub_str.length();
    }
  }
  return result;
}

int main() {
  string str = "aabcbcdbca";
  cout << "Input string: " << str << endl;
  cout << "\nSmallest window containing all distinct characters is: "
       << findSubString(str) << endl;
  return 0;
}
