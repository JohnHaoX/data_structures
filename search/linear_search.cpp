

#include "iostream"
#include "algorithm"
#include "vector"
#include "numeric"

using namespace std;

vector<int> LinearSort(vector<int> &ivec, int given_element){
  vector<int> temp;
  for (int i = 0; i != ivec.size(); ++i) {
    if (ivec[i] == given_element)
      temp.push_back(i);
  }
  return temp;
}

int main() {
  int arr[22] =
      {57, 154, 191, 192, 254, 397, 423, 476, 602, 690, 698, 746, 813, 826, 871, 900, 57, 57, 927, 937, 939, 954};
  vector<int> ivec(begin(arr), end(arr));

  for (const auto it : LinearSort(ivec,57)) {
    cout << it << ' ';
  }
    



  return 0;
}