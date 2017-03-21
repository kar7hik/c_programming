
// Copyright 2017 Karthik


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct point {
  int x, y;
} *p;

int main(void) {
  p = calloc(1, sizeof(struct point));
  // using calloc to create and allocate memory

  printf("%d and %d\n", (*p).x, (*p).y);
  // (*p).x, (*p).y allocated to zero
  
  return 0;
}
