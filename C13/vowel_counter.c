
// Copyright 2017 Karthik

#include <stdio.h>
#include <ctype.h>


#define MSG_LEN 60


int readline(char str[], int n);
int count_vowels(char *p, int n);
int count = 0;

int main(void) {
  char sentences[MSG_LEN + 1];

  readline(sentences, MSG_LEN + 1);
  count_vowels(sentences, MSG_LEN + 1);
  printf("count = %d\n", count);
  return 0;
}


int readline(char str[], int n) {
  int ch, i = 0;

  while ((ch = getchar()) != '\n')
    if (i < n)
      str[i++] = ch;
  str[i] = '\0';
  return i;
}


int count_vowels(char *p, int n) {
  int i;
 
  while (*p != '\0') {
    switch (tolower(*p++)) {
      case 'a': case 'e': case 'i': case 'o': case 'u':
        count++;
    }
  }
 
  /* 
  while (*p != '\0') {
    printf("%c", tolower(*p++));
  }

  */
}

