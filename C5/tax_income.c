// Copyright 2017 karthik

#include <stdio.h>
int main(void) {
  int income;
  float tax;
  
  printf("enter the income: ");
  scanf("%d", &income);

  if (income < 750)
    tax = (1.0 / 100) * income;
  else if (income <= 2250)
    tax = 7.5f + 0.02 * (income - 750);
  else if (income <= 3750)
    tax = 37.50f + 0.03 * (income - 2250);
  else if (income <= 5250)
    tax = 82.50f + 0.04 * (income - 3750);
  else if (income <= 7000)
    tax = 142.50f + 0.05 * (income - 5250);
  else
    tax = 230.00f + 0.06 * (income - 7000);
  
  
  printf("the tax amount you need to pay is %.2f\n", tax);
  return 0;
}
