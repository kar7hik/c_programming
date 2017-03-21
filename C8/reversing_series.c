
// Copyright 2017 Karthik

#include <stdio.h>
#define N 10

int main(void) {
  int a[N], i;
  int b[N] = {[2] = 6, [4] = 5, [9] = 10};
  
  printf("enter the numbers: ");

  for (i = 0; i < N; i++) {
    scanf("%d", &a[i]);
  }

  for (i = N - 1; i >= 0; i--) {
    printf("%d\n", a[i]);
  }

  for (i = 0; i < N; i++) {
    printf("%d\n", b[i]);
  }
  
  return 0;
}
