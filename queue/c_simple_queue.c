

#include "stdio.h"
#include "stdlib.h"
#include "limits.h"


//https://www.geeksforgeeks.org/queue-set-1introduction-and-array-implementation/

typedef struct Queue {
  int front, rear, size;
  unsigned capacity;
  int *arr;
} MyQueue;

MyQueue *CreateQueue(unsigned capacity) {
  MyQueue *my_queue = (MyQueue *) malloc(sizeof(MyQueue));

  my_queue->capacity = capacity;
  my_queue->arr = (int *) malloc(my_queue->capacity * sizeof(int));
  my_queue->front = my_queue->size = 0;
  my_queue->rear = capacity - 1;
  return my_queue;
}

int IsFull(MyQueue *my_queue) {
  return my_queue->size == my_queue->capacity;
}

int IsEmpty(MyQueue *my_queue) {
  return my_queue->size == 0;
}

void EnQueue(MyQueue *my_queue, int item) {
  if (IsFull(my_queue))
    return;
  my_queue->rear = (my_queue->rear + 1) % my_queue->capacity;
  my_queue->arr[my_queue->rear] = item;
//  (my_queue->size)++;
  my_queue->size++;

  printf("%d was enqueued to queue\n", item);

}

int DeQueue(MyQueue *my_queue) {
  if (IsEmpty(my_queue))
    return INT_MIN;
  int item = my_queue->arr[my_queue->front];
  my_queue->front = (my_queue->front + 1) % my_queue->capacity;
  my_queue->size = my_queue->size - 1;
  return item;
}

int main() {

  MyQueue *my_queue = CreateQueue(10);
  EnQueue(my_queue, 1);
  EnQueue(my_queue, 2);
  EnQueue(my_queue, 3);
  EnQueue(my_queue, 4);
  EnQueue(my_queue, 5);

//  printf("%d\n", my_queue->size);
//  printf("%d\n", my_queue->front);
//  printf("%d\n", my_queue->rear);

  printf("%d\n", DeQueue(my_queue));
  printf("%d\n", DeQueue(my_queue));
  printf("%d\n", DeQueue(my_queue));
  printf("%d\n", DeQueue(my_queue));
  printf("%d\n", DeQueue(my_queue));
  printf("%d\n", DeQueue(my_queue));
  printf("%d\n", DeQueue(my_queue));



  return 0;
}