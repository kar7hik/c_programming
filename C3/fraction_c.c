// Copyright 2017 Karthik

#include <stdio.h>

int main(void) {
  int num1, num2, denom1, denom2;

  printf("enter two fractions seperated by a plus sign: ");
  scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

  printf("%d/%d\n", ((num1 * denom2) + (num2 * denom1)), (denom1 * denom2));
  return 0;
}
