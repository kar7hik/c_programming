// Copyright 2017 karthik

#include <stdio.h>

int main(void) {
  int hour, minutes;
  
  printf("enter the time in 24hrs format (hh:mm) : ");
  scanf("%d:%d", &hour, &minutes);

  if (hour <= 12) {
    printf("time is %2d:%2d PM\n", hour, minutes);
  } else if (hour <= 11) {
    printf("time is %2d:%2d AM\n", hour, minutes);
  } else if (hour <= 23) {
    printf("time is %2d:%2d PM\n", hour - 12, minutes);
  } else {
    printf("time is %2d:%2d AM\n", hour - 12, minutes);
  }
  return 0;
}
