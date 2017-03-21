
// Copyright 2017 Karthik

/* header files */
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

/* macros */
#define MAX_LEN 100


/* global variables */
char sentence[MAX_LEN];
char *ptr = sentence;
int counter = 0;

/* function prototypes */
void read_char();
bool analyze_method2();

/* main function */
int main(void) {
  char ch;

  printf("enter a sentence: ");
  read_char();
  
  //  printf("letter count: %d\n", counter);
  if (analyze_method2())
    printf("\nentered sentence is a palindrom!\n");
  else
    printf("\nnot a palindrom!\n");
  
  return 0;
}

void read_char() {
  int i;
  char ch;
  
  while ((ch = getchar()) != '\n'&& counter <= MAX_LEN) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
    // if (isalpha(ch)) {
      *ptr++ = ch;
      counter++;
    }
  }
  for (i = 0; i < counter; i++) {
    printf("%c", sentence[i]);
  }
  
  // printf("\nletter count: %d\n", counter);
}


bool analyze() {
  int i, j;
  printf("\nletter count: %d\n", counter);
  bool answer = true;

  for (i = 0, j = counter - 1; i < (counter) / 2; i++, j--) {
    if (toupper(sentence[i]) != toupper(sentence[j])) {
      // printf("%c != %c\n", toupper(sentence[i]), toupper(sentence[j]));
      answer = false;
    }
  }
  return answer;
}


bool analyze_method2() {
  char *p, *q;

  for (p = sentence, q = p + counter - 1; p <= q; p++, q--)
    if (toupper(*p) != toupper(*q))
      return false;

  return true;
}
