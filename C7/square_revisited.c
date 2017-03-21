// Copyright 2017 Karthik

#include <stdio.h>

int main(void) {
  int n, i;
  char ch;
  
  printf("enter the number: ");
  scanf("%d", &n);
  ch = getchar();
  
  for (i = 1; i <= n; i++) {
    printf("%10d%20d\n", i, i * i);
    if ((i % 24) == 0) {
      printf("press enter to continue...");
      ch = getchar();
    }
  }
  return 0;
}
