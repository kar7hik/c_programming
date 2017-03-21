// Copyright 2017 Karthik

#include <stdio.h>

int main(void) {
  
  float factorial, e = 1.0f, number;
  int n, i, j;
  
  printf("enter the number: ");
  scanf("%d", &n);
  printf("1");
  
  for (i = 1; i <= n; i++) {
    for (j = 1, factorial = 1.0f; j <= i; j++) {
      factorial *= j;
    }
    number = 1.0f / factorial;
    
    printf(" + 1/%.f", factorial);

    e += number;
  }
  printf("\n\nexp is %.10f\n", e);
  
  return 0;
}

