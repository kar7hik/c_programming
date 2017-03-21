

// Copyright 2017 Karthik

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concat(const char *s1, const char *s2);

int main(void) {
  char s1[] = "first ", s2[] = "name";

  char *p = concat(s1, s2);
  printf("%s\n", p);

  return 0;
}

char *concat(const char *s1, const char *s2) {
  char *result = malloc(strlen(s1) + strlen(s2) + 1);

  if (result == NULL) {
    printf("Error: malloc failed\n");
    exit(EXIT_FAILURE);
  }

  strcpy(result, s1);
  strcat(result, s2);

  return result;
}
