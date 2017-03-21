// Copyright 2017 Karthik

#include <stdio.h>

int main(void) {
  double number, sum = 0.0;
  
  
  printf("enter the numbers: ");
  scanf("%lf", &number);

  while (number != 0.0) {
    sum += number;
    scanf("%lf", &number);
  }

  printf("sum is %lf\n", sum);
  
  return 0;
}
