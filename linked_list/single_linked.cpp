

#include "iostream"
#include "algorithm"
#include "vector"
#include "numeric"

using namespace std;

struct Node{
  int data{};
  Node* next{};

  explicit Node(int data){
    this->data=data;
  }
  explicit Node(int data, Node* next){
    this->data=data;
    this->next=next;
  }

  static void PrintChildren(Node* node){
    Node *temp = node;
    while (temp != nullptr){
      cout<<temp->data<<' ';
      temp = temp->next;
    }
    cout << '\n';
  }
};


int main() {

  Node *n5= new Node(5);
  Node *n4= new Node(4,n5);
  Node *n3= new Node(3,n4);
  Node *n2= new Node(2,n3);
  Node *n1= new Node(1,n2);

  Node::PrintChildren(n1);

  Node::PrintChildren(n4);



  return 0;
}