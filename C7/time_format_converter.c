
// Copyright 2017 Karthik
// time format converter.

#include <stdio.h>
#include <ctype.h>

int main(void) {
  int hour, minute;
  char am_pm;
  
  printf("enter the time (hh-mm (AM/PM)) : ");
  scanf("%d-%d %c", &hour, &minute, &am_pm);

  if (hour < 1 || hour > 12) {

    printf("hours entry is out of range:\n");
    return 0;

  } else if (minute < 0 || minute > 59) {

    printf("minutes entry is out of range: \n");
    return 0;
    
  } else if ((am_pm = toupper(am_pm)) == 'A' && hour == 12) {

    hour = 0;

  } else if ((am_pm = toupper(am_pm)) == 'P' && hour == 12) {

    hour = 0;

  }

  switch (toupper(am_pm)) {
    case 'P':
      hour += 12;
      break;
    
    case 'A':
      break;

    default:
      printf("Invalid AM/PM entry\n");
      return 0;
  }
  printf("equivalent 24 hour time: %2d:%.2d\n", hour, minute);
  
  return 0;
}
