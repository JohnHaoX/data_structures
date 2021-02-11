

#include "iostream"
#include "algorithm"
#include "vector"
#include "numeric"

using namespace std;

struct Node{
  int data{};
  Node *left{};
  Node *right{};

  Node() = default;
  explicit Node(int data){
    this->data=data;
    left = right = nullptr;
  }

  ~Node(){
    delete this->left;
    delete this->right;
    delete this;
  }
};




int main() {

  Node *root = new Node(10);
  root->left = new Node(11);
  root->right = new Node(12);
  root->left->left = new Node(13);
  root->left->right = new Node(14);
  root->right->left = new Node(15);
  root->right->right = new Node(16);
  root->left->left->left = new Node(17);
  root->left->left->right = new Node(18);
  root->left->left->right->left = new Node(19);
  root->left->left->right->left->right = new Node(20);

  return 0;
}