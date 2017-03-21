
// Copyright 2017 Karthik

#include <stdio.h>
#include <string.h>
#include "./read_line.h"

int read_line(char str[], int n) {
  int i;
  char ch;

  while ((ch = getchar()) != '\n')
    if (i < n) {
      str[i++] = ch;
    }
  str[i] = '\0';

  return i;
}
