// Copyright 2017 Karthik
#include <stdio.h>

int main(void) {
  int n, i;
  // int i = 0;

  printf("enter the number: ");
  scanf("%d", &n);
  int square = 1;
  
  for (i = 2; i * i <= n; i = i + 2) {
    printf("%d\n", i * i);
  }
 
  /*
  int square = 1;
  if (n % 2 != 0)
    n -= 1;

  printf("squares in: %d\n", n + 1);
  printf("deduced value: %d\n", n);

  
  while (square < n) {
    i += 2;
    square = i * i;
    printf("%d\n", square);
  }
  */
  
  return 0;
}
