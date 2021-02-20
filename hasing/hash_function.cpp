

#include "iostream"
#include "algorithm"
#include "vector"
#include "numeric"
#include "functional"

using namespace std;

//https://en.cppreference.com/w/cpp/container

int main() {

  string str("Hello");
  string str2("Hello");
  string str3("Hi");

  hash<string> str_hash;

  cout<<str_hash(str)<<'\n';
  cout<<str_hash(str2)<<'\n';
  cout<<str_hash(str3)<<'\n';
  return 0;
}