
// Copyright 2017 Karthik

#include <stdio.h>
#include <ctype.h>

int main(void) {

  char letter;
  int count = 0;
  
  printf("enter a sentence: ");
  //  scanf("%c", &letter);

  while ((letter = getchar()) != '\n') {
    switch (toupper(letter)) {
      case 'A': case 'E': case 'I': case 'O': case 'U':
        count += 1;
        break;

      default:
        break;
    }
  }

  printf("your sentence contains %d vowels\n", count);
  
  return 0;
}
