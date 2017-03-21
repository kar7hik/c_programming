
// Copyright 2017 Karthik

// word length count program.

#include <stdio.h>
typedef int Bool;

int main(void) {
  char word;
  int count = 0;

  printf("enter the word: ");
  while ((word = getchar()) != '\n') {   // idiom
    count += 1;
  }

  printf("word count is %d\n", count);
  
  return 0;
}
