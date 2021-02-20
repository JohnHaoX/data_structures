

#include "iostream"
#include "algorithm"
#include "vector"
#include "numeric"
#include "list"

using namespace std;

int main() {

  list<string> list1{"hello","hi"};
  
  for (const auto val : list1) {
    cout << val << ' ';
  }
  cout << '\n';
  list1.insert(++list1.begin(),"こんにちは");
  for (const auto val : list1) {
    cout << val << ' ';
  }

  return 0;
}