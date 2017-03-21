// Copyright 2017 Karthik

#include <stdio.h>

int main(void) {
  int a , b, remainder;

  printf("enter two number: ");
  scanf("%d %d", &a, &b);

  if (a > b) {
    int temp = b;
    b = a;
    a = temp;
  }

  do {
    remainder = b % a;
    b = a;
    a = remainder;
  } while (remainder != 0);
  
  printf("gcd is %d\n", b);
  return 0;
}
