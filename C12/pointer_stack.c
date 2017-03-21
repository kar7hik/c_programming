
// Copyright 2017 Karthik

/* header function */
#include <stdio.h>
#include <stdbool.h>

/* macros */
#define STACK_SIZE 10

/* global variables */
int contents[STACK_SIZE];
int *top_ptr = &contents[0];

/* function prototypes */
int pop();
void push(int i);
bool is_empty();
bool is_full();
void make_empty();
void stack_overflow();
void stack_underflow();
void show_stack();

/* main function */
int main(void) {

  make_empty();
  
  printf("address of top_ptr: %p\n", top_ptr);
  printf("address of contents[0]: %p\n", &contents[0]);
  
  int i;

  for (i = 0; i < STACK_SIZE; i++) {
    printf("pushing %d into contents stack: \n", i * i);
    push(i * i);
  }

  printf("\nTrying to push element into full stack: \n");
  printf("Result: ");
  push(3);
  
  printf("\n");
  // printf("showing contents of stack: \n");
  // show_stack();

  printf("poping of stack: \n");
  while (!is_empty()) {
    printf("%d\n", pop());
  }

  printf("\nTrying to pop empty stack: \n");
  printf("Result: ");
  pop();

  printf("\n\n\n");
  
  return 0;
}

void make_empty() {
  top_ptr = &contents[0];
}

bool is_full() {
  return top_ptr == &contents[STACK_SIZE];
}

bool is_empty() {
  return top_ptr == &contents[0];
}

void push(int i) {
  if (is_full())
    stack_overflow();
  else
    *top_ptr++ = i;
}

int pop() {
  if (is_empty())
    stack_underflow();
  else
    return *--top_ptr;
}

void stack_overflow() {
  printf("overflow!\n");
  printf("address of top_ptr: %p\n", top_ptr);
  printf("address of contents[STACK_SIZE]: %p\n", &contents[STACK_SIZE]);
}

void stack_underflow() {
  printf("underflow!\n");
  printf("address of top_ptr: %p\n", top_ptr);
  printf("address of contents[0]: %p\n", &contents[0]);
}

void show_stack() {
  int i;
  for (i = 0; i < STACK_SIZE; i++) {
    printf("%d\n", contents[i]);
  }
}
