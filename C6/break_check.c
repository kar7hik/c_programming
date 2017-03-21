// Copyright 2017 Karthik

#include <stdio.h>

int main(void) {
  int n;
  /*
  for (;;) {
    printf("enter a number: ");
    scanf("%d", &n);
    if ( n == 0)
      break;
    printf("%d cubes is %d\n", n, n * n * n);
  }
  */
  printf("\n");
  int i = 1;
  while (i <= 128) {
    printf("%d\n", i);
    i *= 2;
  }

  i = 9384;
  do {
    printf("%d\n", i);
    i /= 10;
  } while (i > 0);
  
  return 0;
}
