// Copyright 2017 Karthik

#include <stdio.h>
int main(void) {
  int number;
  int sum = 0;

  printf("enter integers (0 to terminate): ");
  scanf("%d", &number);

  while (number != 0) {
    sum += number;
    scanf("%d", &number);
  }

  printf("The sum is: %d\n", sum);


  
  return 0;
}
