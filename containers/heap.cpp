

#include "iostream"
#include "algorithm"
#include "vector"
#include "numeric"

using namespace std;

//https://www.geeksforgeeks.org/heap-data-structure/
int main() {
  vector<int> ivec{1, 3, 6, 5, 9, 8};

  if (!is_heap(ivec.begin(), ivec.end())) {
    cout << "not heap" << '\n';
  }


//  Min heap
//  make_heap(ivec.begin(),ivec.end(),[](int a, int b){return a>b;});

//  Max heap
  make_heap(ivec.begin(), ivec.end());

  if (is_heap(ivec.begin(), ivec.end())) {
    cout << "is heap" << '\n';
  }



//  Rearranges the elements in the heap range [first,last) in such a way that the part considered a heap is shortened by one: The element with the highest value is moved to (last-1).
  pop_heap(ivec.begin(), ivec.end());
//  the last element of vector ivec
  cout << ivec.back();
//  remove the last element of vector ivec
  ivec.pop_back();
  cout << '\n';




//  Given a heap in the range [first,last-1), this function extends the range considered a heap to [first,last) by placing the value in (last-1) into its corresponding location within it.
  ivec.push_back(123);
//  sort_heap use ascending order
  sort_heap(ivec.begin(), ivec.end(), [](int x, int y) { return x > y; });
  cout << ivec.front() << '\n';

  return 0;
}