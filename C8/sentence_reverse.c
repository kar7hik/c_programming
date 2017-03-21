
// Copyright 2017 Karthik

#include <stdio.h>

#define LENGTH 100

int main(void) {
  char terminator;
  char ch, sentence[LENGTH];

  int count;

  printf("enter the sentence: ");

  for (count = 0; (ch = getchar() != '\n'); count++) {
    sentence[count] = ch;
  }
  sentence[count] = '\0';

  count = 0;

  while (sentence[count] != '\n') {
    printf("%c", sentence[count]);
    count++;
  }

  printf("\n");
      


  return 0;
}
