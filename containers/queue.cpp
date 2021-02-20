

#include "iostream"
#include "algorithm"
#include "vector"
#include "numeric"
#include "queue"
#include "deque"
#include "list"

using namespace std;

int main() {

  deque<int> my_deck(3, 100);
  list<int> my_list(5, 10);

//  queues are implemented as containers adaptors
  queue<int> first;
  first.push(1);
  first.push(2);

  //  queue pop() removes an element from the front of the queue
  cout << first.front() << '\n';
  first.pop();
  cout << first.front() << '\n';
  first.pop();

  queue<int> second(my_deck);
  queue<int, list<int>> third(my_list);
  cout << "the size of my_deck: " << second.size() << '\n';
  cout << "the size of my_list: " << third.size() << '\n';
  return 0;
}