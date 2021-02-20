

#include "stdio.h"
#include "stdlib.h"

typedef struct Node2 {
  int data;
  struct Node2 *next;
  struct Node2 *prev;
} DDL;

void PrintAllNode(DDL *node){
  DDL *temp= node;
  while (temp != NULL) {
    printf("%d\n", temp->data);
    temp = temp->next;
  }
}

int main() {

  DDL *head = NULL;
  DDL *second = NULL;
  DDL *third = NULL;

  head = (DDL *) malloc(sizeof(DDL));
  second = (DDL *) malloc(sizeof(DDL));
  third = (DDL *) malloc(sizeof(DDL));

  head->data = 1;
  second->data = 2;
  third->data = 3;

  head->next = second;
  second->next = third;
  third->next = NULL;

  head->prev = NULL;
  second->prev = head;
  third->prev = second;

  PrintAllNode(head);

  return 0;
}