

#include "iostream"
#include "algorithm"
#include "vector"
#include "numeric"

using namespace std;

int main() {

  vector<int> ivec{};
  cout<<ivec.max_size();
  cout << '\n';

  vector<long long> lvec{};
  cout<<lvec.max_size();
  cout << '\n';
  vector<string> svec{};

  cout<<svec.max_size();

  return 0;
}