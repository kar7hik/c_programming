
// Copyright 2017 Karthik

#include <stdio.h>

#define MAX_LENGTH 10
#define MAX_NUM_WORDS 5


int read_line(char str[], int n);

char words[MAX_NUM_WORDS][MAX_LENGTH];

int main(void) {

  char sentences[2][3];
  int numbers[5] = {2, 3, 5, 8, 9};
  int *ptr = &numbers[0];
  //  int *ptr = numbers;
  //  ptr = &numbers[0];
  //  ptr = numbers;
  int i;
  char *ptr_sentences;
  char name[] = {'s', 'k', 'j'};
  /*
  for (ptr; ptr < numbers + 5; ptr++) {
    printf("%d\n", *ptr);
  }
  */
  
  for (i = 0; i < 3; i++) {
    printf("%c. ", name[i]);
  }
  printf("\n");

  for (i = 0; i < 5; i++) {
    //  printf("*ptr++(i = %d) = %d\t", i, *ptr++);
    //  use ptr++ at the same loop results in incrementing two times.
    printf("*(++ptr) = %d\t\t", *(ptr++));
    printf("numbers[%d] = %d\t", i, numbers[i]);
    printf("\n");
  }
  return 0;
}


int read_line(char str[], int n) {
  int ch, i = 0;

  while ((ch = getchar()) != '\n' && ch != EOF) {
    if (i < n)
      str[i++] = ch;
  }
  str[i] = '\0';

  return i;
}
