// Copyright 2017 Karthik

#include <stdio.h>

int main(void) {
  int phone_part1, phone_part2, phone_part3;

  printf("enter your phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d)%d-%d", &phone_part1, &phone_part2, &phone_part3);
  printf("the number you have entered is %3d.%3d.%4d\n",
         phone_part1, phone_part2, phone_part3);
  
  return 0;
}
