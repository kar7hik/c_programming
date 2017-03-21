
// Copyright 2017 Karthik

#include <stdio.h>
#include <stdbool.h>

int main(void) {
  bool seen[10] = {false};
  
  
  int digit;
  long n;

  printf("enter a number: ");
  scanf("%ld", &n);

  printf("repeated digit(s): ");

  while (n > 0) {
    digit = n % 10;
    if (seen[digit]) 
      printf(" %d", digit);
    seen[digit] = true;
    n /= 10;
    }
  
    printf("\n");
 
  return 0;
}
