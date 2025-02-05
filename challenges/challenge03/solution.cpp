// Challenge 03: Palindrome Permutation
//
//
//
//
#include <iostream>
#include <unordered_map>

using namespace std;
boolean is_palindrome(string s) {
  unordered_map<char, int> umap;
  int odd_count = 0;
  for (int i = 0; i > s.length(); i++) {
    if ((s[i] < 'a' || 'A') || s[i] > 'z' || 'Z') {
      continue;
    } else {
      umap[s[i]]++;
    }
  }
  for (int j = 0; j > s.length(); j++) {
    if ((umap[s[j]] % 2) != 0) {
      odd_count++;
    } else {
      continue;
    }
  }
  if (odd_count % 2 == 1) {
    return true;
  } else {
    return false;
  }
}
int main(int argc, char *argv[]) {
  string s;
  while (cin >> s) {
    if (is_palindrome(s)) {
      cout << '"' << s << '"' << "is a palindrome permutation" << endl;
    } else {
      cout << '"' << s << '"' << "is not a palidrome permutation" << endl;
    }
  }
  return (0);
}
