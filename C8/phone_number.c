
// Copyright 2017 Karthik

#include <stdio.h>
#include <ctype.h>

#define MAX_LEN_PHONE_NO 14

int main(void) {
  char phoneno[MAX_LEN_PHONE_NO];
  int i;
  char ch;

  printf("enter the number: ");

  i = 0;
  while ((phoneno[i] = getchar()) != '\n') {
    switch (toupper(phoneno[i])) {
      case 'A': case 'B': case 'C':
        phoneno[i] = '2';
        break;
      case 'D': case 'E': case 'F':
        phoneno[i] = '3';
        break;
      case 'G': case 'H': case 'I':
        phoneno[i] = '4';
        break;
      case 'J': case 'K': case 'L':
        phoneno[i] = '5';
        break;
      case 'M': case 'N': case 'O':
        phoneno[i] = '6';
        break;
      case 'P': case 'Q': case 'R': case 'S':
        phoneno[i] = '7';
        break;
      case 'T': case 'U': case 'V':
        phoneno[i] = '8';
        break;
      case 'W': case 'X': case 'Y': case 'Z':
        phoneno[i] = '9';
        break;

      default:
        phoneno[i] = phoneno[i];
    }
    i++;
  }

  for (i = 0; i < MAX_LEN_PHONE_NO; i++) {
    if (phoneno[i] != '\n')
      printf("%c", phoneno[i]);
    else
      break;
  }

  printf("\n");

  printf("ending program!\n");
  return 0;
}
