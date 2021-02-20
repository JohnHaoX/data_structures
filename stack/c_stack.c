

#include "stdio.h"
#include "stdlib.h"
#include "limits.h"

typedef struct Stack {
  int top;
  unsigned capacity;
  int *arr;
} MyStack;

MyStack* CreateStack(unsigned capacity){
  MyStack* stack = (MyStack*)malloc(sizeof (MyStack));
  stack->top = -1;
  stack->capacity=capacity;
  stack->arr= (int*)malloc(sizeof (int)*capacity);
  return stack;
}

int IsFull(MyStack* my_stack){
  return my_stack->top == my_stack->capacity-1;
}

int IsEmpty(MyStack* my_stack){
  return my_stack->top == -1;
}

void Push(MyStack *my_stack, int item){
  if(IsFull(my_stack)){
    return;
  }
  my_stack->arr[++my_stack->top]=item;
  printf("%d was pushed to stack\n",item);
}

int Pop(MyStack*my_stack){
  if(IsEmpty(my_stack)){
    return INT_MIN;
  }
  return my_stack->arr[my_stack->top--];
}

int main() {
  MyStack *my_stack =CreateStack(10);
  Push(my_stack,1);
  Push(my_stack,2);
  Push(my_stack,3);
  Push(my_stack,4);


  printf("%d\n",  Pop(my_stack));
  printf("%d\n",  Pop(my_stack));
  printf("%d\n",  Pop(my_stack));
  printf("%d\n",  Pop(my_stack));
  printf("%d\n",  Pop(my_stack));


  return 0;
}