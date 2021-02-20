

#include "iostream"
#include "algorithm"
#include "vector"
#include "numeric"

using namespace std;



//https://www.geeksforgeeks.org/array-rotation/

int gcd(int a, int b) {
  if (b == 0)
    return a;
  else
    return gcd(b, a % b);
}

int main() {
  cout<<gcd(10,8);
  cout << '\n';
  cout<<gcd(84,18);

  return 0;
}