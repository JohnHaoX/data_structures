

#include "iostream"
#include "algorithm"
#include "vector"
#include "numeric"
#include "random"

using namespace std;

void BubbleSort(vector<int> &ivec){
  int len_ivec = ivec.size();

  for (int i = 0; i != len_ivec - 1; ++i) {
    for (int j = 0; j != len_ivec - i - 1; ++j) {
      if(ivec[j]>ivec[j+1])
        swap(ivec[j],ivec[j+1]);
    }
  }
}


int main() {

  random_device gen;
  vector<int> ivec;
  ivec.reserve(10);
  for (int i = 0; i != 10; ++i) {
    ivec.push_back(gen()%100);
  }
  
  for (const auto it : ivec) {
    cout << it << ' ';
  }
  
  cout << '\n';
  BubbleSort(ivec);
  for (const auto it : ivec) {
    cout << it << ' ';
  }

  
  return 0;
}