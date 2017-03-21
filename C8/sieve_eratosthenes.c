// Copyright 2017 Karthik

#include <stdio.h>
#include <math.h>
#define N 1000000

int main(void) {

  long int prime[N];
  int i, j;

  for (i = 0; i < N; i++) {
    prime[i] = 1;
  }
  prime[0] = 0; prime[1] = 0;
  
  for (i = 2; i < sqrt(N); i++) {
    if (prime[i] == 1) {
      for (j = i * i; j < N; j+= i) {
        prime[j] = 0;
      }
    }
  }

  for (i = 2; i < N; i++) {
    if (prime[i] == 1)
      printf("%d, ", i);
  }
  printf("\n");
  
  return 0;
}
