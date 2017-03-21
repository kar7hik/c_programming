
// Copyright 2017 Karthik

/* header files */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

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
void not_enough();
void too_complex();
void subtract();
void divide();
void warn_incomplete();


/* main function */
int main(void) {
  char i;
  int value;
  
  for (;;) {
    printf("enter the expression: ");
    
    for(;;) {
      scanf(" %1c", &i);

      if (i >= '0' && i <= '9')
        push((int) i - '0');

      else if (i == '+')
        push(pop() + pop());

      else if (i == '-')
        subtract();

      else if (i == '*')
        push(pop() * pop());

      else if (i == '/')
        divide();
      else
        break;
    }

    if (i == '=') {
      value = pop();
      if (is_empty()) {
        printf("value: %d\n", value);
      } else {
        warn_incomplete();
        make_empty();
      }
    } else {
      break;
    }
  }
  
  return 0;
}


/* function definition*/

void make_empty() {
  int top = 0;
}

bool is_full() {
  return top == STACK_SIZE;
}

bool is_empty() {
  return top == 0;
}

void push(char i) {
  if (is_full())
    stack_overflow();
  else
    contents[top++] = i;
}

char pop() {
  if (is_empty())
    stack_underflow();
  else
    return contents[--top];
}

void stack_overflow() {
  // printf("Stack overflow.\n");
  too_complex();
}

void stack_underflow() {
  // printf("No data.\n");
  not_enough();
}

void warn_incomplete() {
  printf("Incomplete expression.\n");
}

void subtract() {
  int b = pop();
  int a = pop();

  push(a - b);
}

void divide() {
  int divisor = pop();
  int dividend = pop();

  push(dividend / divisor);
}

void not_enough() {
  printf("Not enough operands.\n");
  exit(EXIT_FAILURE);
}

void too_complex() {
  printf("Expression is too complex.\n");
  exit(EXIT_FAILURE);
}
