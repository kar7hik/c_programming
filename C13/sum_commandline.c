
// Copyright 2017 Karthik

#include <stdio.h>

int main(int argc, char *argv[]) {
  int sum, i;

  for (i = 1; i < argc; i++) {
    sum += atoi(argv[i]);
  }

  printf("%d\n", sum);
  
  return 0;
}
