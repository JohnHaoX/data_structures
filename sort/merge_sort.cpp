

#include "iostream"
#include "algorithm"
#include "vector"
#include "numeric"
#include "random"

using namespace std;

// https://www.geeksforgeeks.org/merge-sort/

void Merge(int arr[], int left, int mid, int right) {
//  mid belong to left part
  int len_arr1 = mid - left + 1;
  int len_arr2 = right - mid;

  int arr1[len_arr1];
  int arr2[len_arr2];

  for (int i = 0; i != len_arr1; ++i)
    arr1[i] = arr[i + left];
  for (int i = 0; i != len_arr2; ++i)
    arr2[i] = arr[mid + 1 + i];

  int i = 0, j = 0, k = left;

  while (i < len_arr1 && j < len_arr2) {
    if (arr1[i] <= arr2[j]) {
      arr[k] = arr1[i];
      ++i;
    } else {
      arr[k] = arr2[j];
      ++j;
    }
    ++k;
  }

  while (i < len_arr1) {
    arr[k] = arr1[i];
    ++i;
    ++k;
  }

  while (j < len_arr2) {
    arr[k] = arr2[j];
    ++j;
    ++k;
  }

}

void MergeSort(int arr[], int left, int right) {
  if (left >= right)
    return;
  int mid = (left+right)/2;
  MergeSort(arr, left, mid);
  MergeSort(arr, mid + 1, right);
  Merge(arr, left, mid, right);
}

int main() {
  random_device gen;

  int arr[10];
  for (int i = 0; i < 10; ++i) {
    arr[i] = gen() % 100;
  }

  cout << "arr" << '\n';
  for (const auto it : arr) {
    cout << it << ' ';
  }
  cout << '\n';

  MergeSort(arr, 0, 9);

  cout << "arr" << '\n';
  for (const auto it : arr) {
    cout << it << ' ';
  }
  cout << '\n';
  return 0;
}