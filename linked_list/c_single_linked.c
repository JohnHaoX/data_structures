

#include "stdio.h"
#include "stdlib.h"


// why we use typedef here
//https://www.tutorialspoint.com/difference-between-struct-and-typedef-struct-in-cplusplus-program

//struct Node{
//  int data;
//  struct Node* next;
//};


typedef struct Node{
  int data;
  struct Node* next;
}NodeLinkedList;

void PrintAllNode(NodeLinkedList *node){
  NodeLinkedList *temp= node;
  while (temp != NULL) {
    printf("%d\n", temp->data);
    temp = temp->next;
  }
}

int main() {

  NodeLinkedList * head = NULL;
  NodeLinkedList * second = NULL;
  NodeLinkedList * third = NULL;

  head = (NodeLinkedList*)malloc(sizeof(NodeLinkedList));
  second = (NodeLinkedList*)malloc(sizeof(NodeLinkedList));
  third = (NodeLinkedList*)malloc(sizeof(NodeLinkedList));

  head->data=1;
  second->data=2;
  third->data=3;

  head->next=second;
  second->next=third;

  PrintAllNode(head);

  return 0;
}