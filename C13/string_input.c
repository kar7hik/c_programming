
// Copyright 2017 Karthik

#include <stdio.h>

#define N 50

int read_line(char str[], int n);
void print_line(const char const str[], int n);


int main(void) {
  char str[N];
  int n, count;
  printf("enter the sentence: ");
  n = read_line(str, N);
  print_line(str, n);
  count = count_spaces(str);

  printf("count: %d\n", count);
  
  
  return 0;
}

int read_line(char str[], int n) {
  int ch, i = 0;

  while ((ch = getchar()) != '\n') {
    if (i < n)
      str[i++] = ch;
  }
  str[i] = '\0';
  return i;
}

void print_line(const char const str[], int n) {
  int i = 0;

  for (i = 0; i < n; i++) {
    printf("%c", str[i]);
  }
  printf("\n");
}

int count_spaces(const char* str) {
  int count = 0;

  while (*str != '\0') {
    if (*str++ == ' ')
      count++;
  }
  return count;
}
