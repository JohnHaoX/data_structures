

#include "iostream"
#include "algorithm"
#include "vector"
#include "numeric"
#include "random"

using namespace std;


void InsertionSort(vector<int> &ivec) {
  int len_ivec = ivec.size();

  for (int i = 1; i != len_ivec; ++i) {
    int temp = ivec[i];
    int j = i - 1;
    while (temp < ivec[j] && j >= 0) {
      ivec[j + 1] = ivec[j];
      --j;
    }
    ivec[j + 1] = temp;
  }
}

int main() {
  random_device gen;
  vector<int> ivec;
  ivec.reserve(10);
  for (int i = 0; i < 10; ++i) {
    ivec.push_back(gen() % 100);
  }

  cout << "ivec" << '\n';
  for (const auto it : ivec) {
    cout << it << ' ';
  }
  cout << '\n';

  InsertionSort(ivec);

  cout << "ivec" << '\n';
  for (const auto it : ivec) {
    cout << it << ' ';
  }
  cout << '\n';

  return 0;
}