// Copyright 2017 Karthik

#include <stdio.h>

int main(void) {
  int digit = 0, num, n;

  printf("enter the number: ");
  scanf("%d", &num);
  n = num;
  do {
    n /= 10;
    digit++;
  } while (n > 0);

  printf("number of digits in %d is: %d\n", num, digit);

  return 0;
}
