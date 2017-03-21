// Copyright 2017 Karthik

#include <stdio.h>

int main(void) {
  int i, odd, n, square;

  printf("enter the number of entries in table: ");
  scanf("%d", &n);

  i = 1;
  odd = 3;

  for (square = 1; i <= n; odd += 2) {
    printf("%10d%10d\n", i, square);
    ++i;
    square += odd;
    printf("odd = %d\tsquare = %d\n", odd, square);
  }
  return 0;
}
