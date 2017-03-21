// Copyright 2017 Karthik

#include <stdio.h>

int main(void) {
  int a, b, remainder, denominator, numerator;

  printf("enter the fraction (numer/denom): ");
  scanf("%d/%d", &numerator, &denominator);

  a = numerator;
  b = denominator;

  if (a > b) {
    int temp = b;
    b = a;
    a = temp;
  }

  do {
    remainder = b % a;
    b = a;
    a = remainder;
  } while (remainder != 0);

  int gcd = b;
  printf("gcd is %d\n", gcd);
  
  numerator /= gcd;
  denominator /= gcd;

  printf("In lowest term: %d/%d\n", numerator, denominator);


  return 0;
}
