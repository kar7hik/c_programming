
// Copyright 2017 Karthik

#include <stdio.h>


int main(int argc, char *argv[]) {
  int i;

  printf("%d\n", argc);
  for (i = argc - 1; i > 0; --i) {
    // printf("i = %d\n", i);
    printf("%s ", argv[i]);
  }
  printf("\n");
  return 0;
}

