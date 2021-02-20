

#include "iostream"
#include "algorithm"
#include "vector"
#include "numeric"
#include "queue"

using namespace std;

void PrintQueue(priority_queue<int> pq){
  priority_queue<int> temp=pq;
  while (!temp.empty()){
    cout<<temp.top()<<'\n';
    temp.pop();
  }

  cout << '\n';
}


//https://en.cppreference.com/w/cpp/container/priority_queue

int main() {
  priority_queue<int> pq;

  pq.push(10);
  pq.push(40);
  pq.push(30);
  pq.push(20);
  pq.push(5);
  pq.push(1);

  PrintQueue(pq);


  return 0;
}