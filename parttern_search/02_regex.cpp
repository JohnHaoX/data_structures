#include "iostream"
#include "algorithm"
#include "vector"
#include "numeric"
#include "regex"

using namespace std;


int main() {
  string text("AABAACAADAABAABA");
  regex pat("AABA");
  smatch res;

  cout<<regex_search(text,pat);
  cout << '\n';







  return 0;
}