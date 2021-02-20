

#include "iostream"
#include "vector"

using namespace std;


// search an element on a sorted array
int BinarySearchRecursive(const vector<int> &ivec, int key, int left, int right) {
  if (left <= right) {
    int mid = (left+right)/2;
    if (key == ivec[mid])
      return mid;
    if (key < ivec[mid])
      return BinarySearchRecursive(ivec, key, left, mid - 1);
    return BinarySearchRecursive(ivec, key, mid + 1, right);
  }
  return -1;
}

int BinarySearchIterative(const vector<int> &ivec, int key, int left, int right) {
  while (left <= right){
    int mid = (left+right)/2;
    if ( key == ivec[mid])
      return mid;
    if(key < ivec[mid])
      right = mid-1;
    else
      left = mid+1;
  }
  return -1;
}

int main() {
//  int arr[20] = {57, 154, 191, 192, 254, 397, 423, 476, 602, 690, 698, 746, 813, 826, 871, 900, 927, 937, 939, 954};
////  int arr2[1] = {900};
//  vector<int> ivec(begin(arr), end(arr));
//  cout << BinarySearchRecursive(ivec, 954, 0, 19);
//  cout << '\n';
//  cout << BinarySearchIterative(ivec, 954, 0, 19);
//  cout << '\n';


  int arr2[11]={2,10,17,45,49,55,68,85,92,98,110};
  vector<int> ivec2(begin(arr2),end(arr2));
  cout<<BinarySearchIterative(ivec2,10,0,10);


  return 0;
}