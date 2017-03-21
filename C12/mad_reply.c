
// Copyright 2017 Karthik

#include <stdio.h>

/* macros */
#define MAX_LEN 100

char sentence[MAX_LEN];
char *ptr = sentence;

int main(void) {

  //  printf("address of ptr: %p\n", ptr);
  //  printf("address of sentence[0]: %p\n", &sentence[0]);

  char ch;
  int counter = 0, i;
  
  printf("enter the sentence: ");
  
  while ((ch = getchar()) != '\n') {
    *ptr++ = ch;
    counter++;
  }

  // printf("current value stored in pointer: %p\n", ptr);
  // printf("address of last element: %p\n", &sentence[counter]);
  
  printf("Reversal is: \n");
  for (i = 0; i < counter; i++) {
    printf("%c", *--ptr);
  }

  printf("\n");
  
  return 0;
}
