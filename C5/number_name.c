// Copyright 2017 Karthik

// asks the user for a 2 digit no. then prints
// english word for the number.

#include <stdio.h>

int main(void) {
  int number, fd, sd;

  printf("please enter the two digit number: ");
  scanf("%d", &number);

  fd = number / 10;
  sd = number % 10;

  // printf("1st digit: %d\n2nd digit: %d\n", fd, sd);

  if (number == 11) printf("eleven\n");
  else if (number == 12) printf("twelve\n");
  else if (number == 13) printf("thirteen\n");
  else if (number == 14) printf("fourteen\n");
  else if (number == 15) printf("fifteen\n");
  else if (number == 16) printf("sixteen\n");
  else if (number == 17) printf("seventeen\n");
  else if (number == 18) printf("eighteen\n");
  else if (number == 19) printf("nineteen\n");

  else {
    switch (fd) {
      case 2: printf("twenty-"); break;
      case 3: printf("thirty-"); break;
      case 4: printf("forty-"); break;
      case 5: printf("fifty-"); break;
      case 6: printf("sixty-"); break;
      case 7: printf("seventy-"); break;
      case 8: printf("eighty-"); break;
      case 9: printf("ninety-"); break;
    }

    switch (sd) {
      case 1: printf("one\n"); break;
      case 2: printf("two\n"); break;
      case 3: printf("three\n"); break;
      case 4: printf("four\n"); break;
      case 5: printf("five\n"); break;
      case 6: printf("six\n"); break;
      case 7: printf("seven\n"); break;
      case 8: printf("eight\n"); break;
      case 9: printf("nine\n"); break;

    }
  }
  
  return 0;
}
