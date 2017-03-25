

// Copyright 2017 Karthik


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concat(const char *s1, const char *s2);


int main(void) {
  char s1[] = "karthik ";
  char s2[] = "jayashree";

  char *s3 = concat("karthik ", "jayashree");

  printf("%s\n", s3);
  return 0;
}


char *concat(const char *s1, const char *s2) {
  char *result;

  result = malloc(strlen(s1) + strlen(s2) + 1);

  if (result == NULL) {
    printf("Error: malloc failed in concat\n");
    exit(EXIT_FAILURE);
  }

  strcpy(result, s1);
  strcat(result, s2);

  return result;
}
