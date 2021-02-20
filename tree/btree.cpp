

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

  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  /*
   *              1
   *         2         3
   */


  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  root->right->right = new Node(7);
  /*
   *               1
   *         2         3
   *       4   5      6   7
   */

  root->left->left->left = new Node(8);
  root->left->left->right = new Node(9);
  root->left->left->right->left = new Node(10);
  root->left->left->right->left->right = new Node(11);

  /*
   *               1
   *         2            3
   *       4   5         6   7
   *    8  9   10  11
   */


  return 0;
}