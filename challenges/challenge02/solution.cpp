// Challenge 02: Closest Numbers
// Name:  Carlos Gomez: cgomezze

// Brief description:

// This code solves yyyy based on the following idea/implementation...

#include <algorithm>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

// Main Execution

int main(int argc, char *argv[]) {
  int size;
  vector<int> numbers;
  vector<int> answer;
  while (cin >> size) {
    numbers.resize(size);
    for (int i = 0; i < size; i++) {
      cin >> numbers[i];
    }
    sort(numbers.begin(), numbers.end());
    int min_diff = INT_MAX;
    for (int j = 0; j < size - 1; j++) {
      int abs_value;
      abs_value = numbers[j + 1] - numbers[j];
      if (abs_value < min_diff) {
        answer.clear();
        answer.push_back(numbers[j]);
        answer.push_back(numbers[j + 1]);
        min_diff = abs_value;
      } else if (abs_value == min_diff) {
        answer.push_back(numbers[j]);
        answer.push_back(numbers[j + 1]);
      }
    }
    for (int k = 0; k < answer.size(); k++) {
      if (k == answer.size() - 1) {
        cout << answer[k];
      } else {
        cout << answer[k] << " ";
      }
    }
    cout << endl;
  }
  return 0;
}
