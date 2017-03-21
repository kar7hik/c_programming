
// Copyright 2017 Karthik


#include <stdio.h>

char strA[80] = "A string to be used";
char strB[80];

int main(void) {
  int i;
  char *pA, *pB;

  puts(strA);
  pA = strA;

  puts(pA);
  pB = strB;
  putchar('\n');

  while (*pA != '\0') {  // comparing each elements in strA
    *pB++ = *pA++;  // copying elements from strA to strB
  }

  *pB = '\0';  // adding null terminator.
  puts(strB);  // printing strB.
  
  return 0;
}
