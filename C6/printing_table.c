// Copyright 2017 Karthik

#include <stdio.h>

int main(void) {

  int number, square;

  printf("enter the number of sqaure: ");
  scanf("%d", &number);

  int i = 1;
  printf("S.No\tSquare\n");
  while (i <= number) {
    printf("%d\t%d\n", i, i * i);
    i++;
  }
  return 0;
}
