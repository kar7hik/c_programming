// Copyright 2017 Karthik

#include <stdio.h>

int main(void) {

  int occurance[10] = {0};
  int digit, i;
  long n;
  
  printf("enter the number: ");
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    occurance[digit] += 1;
    n /= 10;
  }

  for (i = 0; i < 10; i++) {
    printf("%d  ", occurance[i]);
  }
  printf("\n\n");
  
  return 0;
}
