

#include "iostream"
#include "algorithm"
#include "vector"
#include "numeric"
#include "stack"

using namespace std;

//https://www.cs.cmu.edu/~adamchik/15-121/lectures/Trees/trees.html

//Depth First Traversals:
//(a) Inorder (Left, Root, Right)
//(b) Preorder (Root, Left, Right)
//(c) Postorder (Left, Right, Root)
//
//Breadth First or Level Order Traversal (Root, Left, Right)
//There are two way to implement Breath First or Level Order Traversal

/*
 *              1
 *        2             3
 *    4      5       6    7
 * 8   9   10  11
 * 12
 */


struct Node {
  int data{};
  Node *left{};
  Node *right{};

  Node() = default;
  explicit Node(int data) {
    this->data = data;
    left = right = nullptr;
  }

  ~Node() {
    delete this->left;
    delete this->right;
    delete this;
  }

};

void InOrderTraversal(Node *node) {
  if (node == nullptr)
    return;
  InOrderTraversal(node->left);
  cout << node->data << ' ';
  InOrderTraversal(node->right);
}

void PostOrderTraversal(Node *node) {
  if (node == nullptr)
    return;
  PostOrderTraversal(node->right);
  cout << node->data << ' ';
  PostOrderTraversal(node->left);
}

void PreOrderTraversal(Node *node) {
  if (node == nullptr)
    return;
  cout << node->data << ' ';
  PreOrderTraversal(node->left);
  PreOrderTraversal(node->right);
}

// Breadth First Traversal requires three method, one is print one level's element, one is get the height of btree,
// last one is for-loop to iterate all the level
void PrintGivenLevel(Node *node, int level) {
  if (node == nullptr) {
    return;
  } else if (level == 1) {
    cout << node->data << ' ';
  } else {
    PrintGivenLevel(node->left, level - 1);
    PrintGivenLevel(node->right, level - 1);
  }
}

int GetBTreeHeight(Node *node) {
  if (node == nullptr) {
    return 0;
  } else {
//    c++ default int value is 0
    int l_height = GetBTreeHeight(node->left);
    int r_height = GetBTreeHeight(node->right);

    if (l_height < r_height)
      return r_height + 1;
    return l_height + 1;
  }
}

void LevelOrderTraversal(Node *node) {
  int height = GetBTreeHeight(node);
  for (int i = 0; i != height; ++i) {
    PrintGivenLevel(node, i + 1);
  }
}

// InOrderTraversal implement via queue
//https://www.geeksforgeeks.org/inorder-tree-traversal-without-recursion/
void InOrderTraversalStack(Node *node) {
  stack<Node *> s;
  Node *curr = node;

  while (curr != nullptr || !s.empty()) {
    while (curr != nullptr) {
      s.push(curr);
      curr = curr->left;
    }
    curr = s.top();
    s.pop();
    cout << curr->data << ' ';
    curr = curr->right;
  }
}

void PostOrderTraversalStack(Node *node) {
  stack<Node *> s;
  Node *curr = node;

  while (curr != nullptr || !s.empty()) {
    while (curr != nullptr) {
      s.push(curr);
      curr = curr->right;
    }
    curr = s.top();
    s.pop();
    cout << curr->data << ' ';
    curr = curr->left;
  }
}


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
  root->left->right->left = new Node(10);
  root->left->right->right = new Node(11);


  /*                   1
  *             2               3
  *         4       5         6    7
  *      8    9   10  11
  *   12
  */

  root->left->left->left->left = new Node(12);

  cout << "InOrderTraversal: ";
  InOrderTraversal(root);
  cout << '\n';
  cout << "PostOrderTraversal: ";
  PostOrderTraversal(root);
  cout << '\n';
  cout << "PreOrderTraversal: ";
  PreOrderTraversal(root);
  cout << '\n';

  cout << "LevelOrderTraversal: ";
  LevelOrderTraversal(root);
  cout << '\n';

  cout << "InOrderTraversalStack: ";
  InOrderTraversalStack(root);
  cout << '\n';

  cout << "PostOrderTraversalStack: ";
  PostOrderTraversalStack(root);
  cout << '\n';

  return 0;
}