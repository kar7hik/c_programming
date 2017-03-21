// copyright 2017 karthik

#include <stdio.h>

int main(void) {
  int value;

  printf("enter a number: ");
  scanf("%d", &value);

  if (value >= 0 && value <= 9) {
    printf("%d is a 1 digit number.\n", value);
  } else if (value >= 10 && value <= 99) {
    printf("%d is a 2 digit number.\n", value);
  } else if (value >= 100 && value <= 999) {
    printf("%d is a 3 digit number.\n", value);
  }
  printf("ending!\n");
  return 0;
}
