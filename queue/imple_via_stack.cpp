

#include "iostream"
#include "algorithm"
#include "vector"
#include "numeric"
#include "stack"

using namespace std;

struct MyQueue {
  stack<int> s1, s2;
  void EnQueue(int item) {
    while (!s1.empty()){
      s2.push(s1.top());
      s1.pop();
    }
    s1.push(item);

    while (!s2.empty()){
      s1.push(s2.top());
      s2.pop();
    }
  }


  int DeQueue(){
    if(s1.empty()){
      cout<<"Q is empty";
      exit(-1);
    }
    int temp = s1.top();
    s1.pop();
    return temp;
  }

};

int main() {

  MyQueue my_queue;
  my_queue.EnQueue(1);
  my_queue.EnQueue(2);

  cout<<my_queue.DeQueue();
  cout << '\n';
  cout<<my_queue.DeQueue();

  return 0;
}