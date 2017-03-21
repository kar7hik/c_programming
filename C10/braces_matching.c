
// Copyright 2017 Karthik

/* header files */
#include <stdio.h>
#include <stdbool.h>

/* macros */
#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;

/* function prototypes */
void make_empty();
bool is_empty();
bool is_full();
void push(char i);
char pop();
void stack_overflow();
void stack_underflow();
void nested();
void not_nested();

/* main function */
int main(void) {
  char i;

  printf("enter the parentheses and/or braces: ");

  while ((i = getchar()) != '\n') {
    switch (i) {
      case '(': case '{': {
        push(i);
        break;
      }
      case ')': {
        if (is_empty() || pop() != '(')
          not_nested();
        break;
      }
      case '}': {
        if (is_empty() || pop() != '{')
          not_nested();
        break;
      }
    }
  }

  if (is_empty())
    nested();
  else
    not_nested();
  
  return 0;
}

void make_empty() {
  top = 0;
}

bool is_empty() {
  return top == 0;
}

bool is_full() {
  return top == STACK_SIZE;
}

void push(char i) {
  if (is_full()) {
    stack_overflow();
  } else {
    contents[top++] = i;
  }
}

char pop() {
  if (is_empty())
    stack_underflow();
  else
    return contents[--top];
}

void stack_overflow() {
  printf("stack overflow\n");
  return;
}

void stack_underflow() {
  not_nested();
  //  printf("stack is empty. no data to pop!\n");
  return;
}

void nested() {
  printf("Parentheses/braces are nested properly.\n");
}

void not_nested() {
  printf("Parenthese/braces are not nested properly.\n");
}
