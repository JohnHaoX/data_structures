
#include "stdio.h"
#include "stdlib.h"
#include "limits.h"


//https://www.geeksforgeeks.org/binary-tree-set-3-types-of-binary-tree/


// TODO: Full Binary Tree
//every node has 0 or 2 children.

// TODO: Complete Binary Tree
//all the levels are completely filled except possibly the last level and the last level has all keys as left as possible

// TODO: Perfect Binary Tree
// all the internal nodes have two children and all leaf nodes are at the same level.


// TODO: Balanced Binary Tree
//https://www.programiz.com/dsa/balanced-binary-tree#:~:text=A%20balanced%20binary%20tree%2C%20also,by%20not%20more%20than%201.


// TODO: A degenerate (or pathological) tree A Tree
//A Tree where every internal node has one child. Such trees are performance-wise same as linked list.

typedef struct Node {
  int data;
  struct Node *left;
  struct Node *right;
} MyNode;

MyNode *NewNode(int data) {
  MyNode *node = (MyNode *) malloc(sizeof(MyNode));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return node;
}

int main() {

  MyNode *root = NewNode(1);
  /*
   *     1
   *  /    \
   * NULL  NULL
   */
  root->left = NewNode(2);
  root->right = NewNode(3);
  /*
   *    1
   *   / \
   *  2   3
   */

  root->left->left =NewNode(4);
  root->left->right=NewNode(5);
  root->right->left=NewNode(6);
  root->right->right=NewNode(7);

  /*
   *       1
   *     /   \
   *    2     3
   *  /  \   /  \
   * 4   5  6    7
   */

  return 0;
}

