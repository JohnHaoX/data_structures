

#include "iostream"
#include "algorithm"
#include "vector"
#include "numeric"

using namespace std;

vector<int> NativePatternSearch(string &text, string &pattern) {
  vector<int> temp;
  auto len_text = text.size();
  auto len_pattern = pattern.size();

  for (int i = 0; i != len_text - len_pattern + 1; ++i) {
    int j;
    for (j = 0; j != len_pattern; ++j) {
      if (text[j + i] != pattern[j]) {
        break;
      }
    }
    if (j == len_pattern)
      temp.push_back(i);
  }
  return temp;
}

int main() {
  string text("AABAACAADAABAABA");
  string pattern("AABA");

  for (const auto it : NativePatternSearch(text, pattern)) {
    cout << it << ' ';
  }





//  for (const auto it : NativePatternSearch(text, pattern)) {
//    cout << it << ' ';
//  }
  return 0;
}