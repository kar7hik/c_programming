
// Copyright 2017 Karthik

#include <stdio.h>
#include <string.h>

#define GENERIC_MAX(type)                 \
  type type##_max(type x, type y)         \
  {                                       \
    return x > y ? x : y;                 \
  }

int main(void) {
  GENERIC_MAX(float);  // creates the function float_max
  // with return type of float.
  
  printf("%f\n", float_max(15.36, 15.35));

  printf("compiled on %s at %s on %s\n", __DATE__, __TIME__, __FILE__);

  /* wrong:
     
  char ch[] = "1994094";
  (strcmp(__STDC__, ch)) ? // cant compare since __STDC__ is an int.
      printf("C89\n") : printf("C99\n");

      see below!!!

  */

  #if __STDC__
  printf("C89\n");
  #else
  printf("C99\n");
  #endif
  
  return 0;
}
