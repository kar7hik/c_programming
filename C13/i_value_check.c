
// Copyright 2017 Karthik


#include <stdio.h>

int main(void) {
  int i;

  for (i = 1; i <= 10; i++) {
    printf("i value inside: %d\n", i);
  }

  printf("now in outside:\n");
  printf("i value: %d\n", i);
  return 0;
}
