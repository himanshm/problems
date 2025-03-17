#include <iostream>
#include <unordered_map>
#include <climits>

using namespace std;

string findSubString(string str) {
    int n = str.size();
    unordered_map<char, int> char_count;  // To track character frequency

    // Find the number of distinct characters in the string
    unordered_map<char, bool> unique_chars;
    for (char ch : str) unique_chars[ch] = true;
    int dist_chars = unique_chars.size();

    int left = 0, min_len = INT_MAX, start_index = 0;
    int count = 0;  // Number of distinct characters found in the current window

    // Sliding Window
    for (int right = 0; right < n; ++right) {
        char_count[str[right]]++;

        // If this character appears for the first time in the window, increase count
        if (char_count[str[right]] == 1) {
            count++;
        }

        // When all distinct characters are in the window, try shrinking
        while (count == dist_chars) {
            // Update the minimum window size when needed
            if (right - left + 1 < min_len) {
                min_len = right - left + 1;
                start_index = left;
            }

            // Shrink the window from the left
            char_count[str[left]]--;
            if (char_count[str[left]] == 0) {
                count--;  // Character completely removed from window
            }
            left++;  // Move left boundary to shrink
        }
    }

    return (min_len == INT_MAX) ? "" : str.substr(start_index, min_len);
}

int main() {
    string str = "aabcbcdbca";
    cout << "Input string: " << str << endl;
    cout << "\nFinding the smallest window..." << endl;
    string result = findSubString(str);
    cout << "\nSmallest window containing all distinct characters is: " << result << endl;
    return 0;
}
