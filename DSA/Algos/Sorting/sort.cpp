#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> arr = {5, 2, 9, 1, 5, 6};

  // Sorting in ascending order
  sort(arr.begin(), arr.end());

  cout << "Sorted array (ascending): ";
  for (int num: arr) {
    cout << num << " ";
  }
  cout << endl;

  // Sorting in descending order using a custom comparator
  sort(arr.begin(), arr.end(), greater<int>());

  cout << "Sorted array (descending): ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

  // Defining a custom sorting order -> Custom comparator
  std::vector<std::pair<int, std::string>> students = {
        {3, "Alice"}, {1, "Charlie"}, {2, "Bob"}
    };

    // Custom sort: Sort by first element (ID) in ascending order
    std::sort(students.begin(), students.end(), [](const auto &a, const auto &b) {
        return a.first < b.first; // Sort by ID (ascending)
    });

    std::cout << "Sorted by ID (ascending):\n";
    for (const auto &s : students) {
        std::cout << s.first << " - " << s.second << "\n";
    }

    // Custom sort: Sort by second element (Name) in descending order
    std::sort(students.begin(), students.end(), [](const auto &a, const auto &b) {
        return a.second > b.second; // Sort by Name (descending)
    });

    std::cout << "\nSorted by Name (descending):\n";
    for (const auto &s : students) {
        std::cout << s.first << " - " << s.second << "\n";
    }

    return 0;
}
