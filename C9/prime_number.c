
// Copyright 2017 Karthik

#include <stdio.h>
#include <stdbool.h>

bool is_prime(int number) {
  int divisor;

  if (number <= 1)
    return false;

  for (divisor = 2; divisor * divisor <= number; divisor++)
    if (number % divisor == 0)
      return false;
    return true;
  
}

int main(void) {
  int number;

  printf("enter the number: ");
  scanf("%d", &number);

  if (is_prime(number)) {
    printf("%d is a prime number.\n", number);
  } else {
    printf("%d is not a prime number.\n", number);
  }

    
  return 0;
}
