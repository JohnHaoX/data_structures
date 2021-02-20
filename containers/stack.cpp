

#include "iostream"
#include "algorithm"
#include "vector"
#include "numeric"
#include "stack"

using namespace std;

int main() {

  stack<int> s;
  s.push(1);
  s.push(2);
  s.push(3);

  cout<<s.top()<<'\n';
  s.pop();
  cout<<s.top()<<'\n';
  s.pop();
  cout<<s.top()<<'\n';
  s.pop();

  if(s.empty()){
    cout<<"stack s is empty"<<'\n';
  }

  return 0;
}