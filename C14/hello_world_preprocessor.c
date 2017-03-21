
// Copyright 2017 Karthik

#include <stdio.h>

#define NAME "world"
#define PRINT_INT(n) printf(#n" = %d\n", n)
// will become printf("n"" = %d\n", n)


int main(void) {
  
  printf("Hello !\n");
  printf(NAME"\n");
  printf(NAME " is a stage\n");

  int i;

  for (i = 1; i < 10; i++) {
    PRINT_INT(i * i);
  }
  return 0;
}
