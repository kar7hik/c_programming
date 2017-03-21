// Copyright 2017 Karthik

#include <stdio.h>

int main(void) {
  float num = 0.0f;
  float largest;
  
  printf("enter a number: ");
  scanf("%f", &num);
  largest = num;

  while (num > 0) {
    printf("enter a number: ");
    scanf("%f", &num);
    if (num >= largest)
      largest = num;
  }

  printf("the largest number entered was %f\n", largest);
  
  return 0;
}
