// Copyright 2017 Karthik

#include <stdio.h>

int main(void) {
  int value;

  printf("enter the number: ");
  scanf("%d", &value);
  printf("no\t\tsquare\n");

  for (int i = 1; i <= value; i++) {

      printf("%d\t\t%d\n", i, i * i);
  }

  
  return 0;
}
