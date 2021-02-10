

#include "iostream"
#include "algorithm"
#include "vector"
#include "numeric"
#include "random"

using namespace std;

int Partition(vector<int> &ivec, int low, int high) {
  int pivot = ivec[high];

//  i point to the element which is the first one greater than pivot
  int i = low - 1;

  for (int j = low; j != high; ++j) {
    if (ivec[j] < pivot) {
      ++i;
      swap(ivec[i], ivec[j]);
    }
  }
  swap(ivec[i + 1], ivec[high]);
  return i + 1;
}

void QuickSort(vector<int> &ivec, int low, int high) {
  if (low < high) {
    int pivot = Partition(ivec, low, high);
    QuickSort(ivec, low, pivot - 1);
    QuickSort(ivec, pivot + 1, high);
  }
}

int main() {
  random_device gen;
  vector<int> ivec;
  ivec.reserve(10);
  for (int i = 0; i < 10; ++i) {
    ivec.push_back(gen() % 100);
  }
  cout << '\n';

  cout << "ivec" << '\n';
  for (const auto it : ivec) {
    cout << it << ' ';
  }
  cout << '\n';

  QuickSort(ivec, 0, 9);

  cout << "ivec" << '\n';
  for (const auto it : ivec) {
    cout << it << ' ';
  }
  cout << '\n';

  return 0;
}