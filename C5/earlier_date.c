// Copyright 2017 karthik

#include <stdio.h>
int main(void) {
  int date1, date2, month1, month2, year1, year2;

  printf("enter the first date(mm/dd/yy): ");
  scanf("%2d/%2d/%4d", &date1, &month1, &year1);

  
  printf("enter the second date(mm/dd/yy): ");
  scanf("%2d/%2d/%4d", &date2, &month2, &year2);

  if (year1 > year2)
    printf("%d/%d/%d is earlier than %d/%d/%d\n", date2, month2, year2,
           date1, month1, year1);
  else if (year1 < year2)
    printf("%d/%d/%d is earlier than %d/%d/%d\n", date1, month1, year1,
           date2, month2, year2);

  else {
      if (month1 > month2)
        printf("%d/%d/%d is earlier than %d/%d/%d\n", date2, month2, year2,
               date1, month1, year1);
      else if (month1 < month2)
        printf("%d/%d/%d is earlier than %d/%d/%d\n", date1, month1, year1,
               date2, month2, year2);
      
      else {
        if (date1 > date2)
          printf("%d/%d/%d is earlier than %d/%d/%d\n", date2, month2, year2,
                 date1, month1, year1);
        else if (date1 < date2)
          printf("%d/%d/%d is earlier than %d/%d/%d\n", date1, month1, year1,
                 date2, month2, year2);
      }
  }

  return 0;
}
