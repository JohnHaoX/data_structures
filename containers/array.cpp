

#include "iostream"
#include "algorithm"
#include "vector"
#include "numeric"
#include "array"

using namespace std;

int main() {

  array<int, 5> first = {10, 20, 30, 40, 50};
  array<int, 5> second = {11, 22, 33, 44, 55};

  first.swap(second);

  for (const auto it : first) {
    cout << it << ' ';
  }

  cout << '\n';
  int *ptr = first.data();
  cout<<*(ptr+1);

  cout << '\n';
  cout<<first.front();


  cout << '\n';
  array<int, 10> arr{};
  cout<<"arr.size() "<<arr.size();
  cout << '\n';
  cout<<"arr.max_size() "<<arr.max_size();
  cout << '\n';

//  fill
  arr.fill(100);
  for (const auto it : arr) {
    cout << it << ' ';
  }
  cout << '\n';



//  cout<<first.at(50);
  return 0;
}