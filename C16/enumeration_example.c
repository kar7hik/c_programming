
// Copyright 2017 Karthik

#include <stdio.h>


enum week {sunday, monday, tuesday,
           wednesday, thursday, friday,
           saturday};
int main(void) {

  enum week today;
  today = saturday;

  printf("Day %d\n", today + 1);

  return 0;
}
