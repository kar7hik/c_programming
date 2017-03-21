// Copyright 2017 Karthik

#include <stdio.h>
#define EARLY eyy = yy; emm = mm; edd = dd;

int main(void) {

  int dd, mm, yy;
  int edd, emm, eyy;  // early
  

  printf("enter the date (dd/mm/yyyy) : ");
  scanf("%d/%d/%d", &edd, &emm, &eyy);


  if (edd == 0 | emm == 0 | eyy == 0) return 0;


  while (edd != 0 && emm != 0 && eyy != 0) {

    printf("enter the date (dd/mm/yyyy) : ");
    scanf("%d/%d/%d", &dd, &mm, &yy);

    if (dd == 0 | mm == 0 | yy == 0) break;
    
    if (eyy > yy) {EARLY}
    else if (eyy == yy)
      if (emm > mm) {EARLY}
      else if (emm == mm)
        if (edd > dd) {EARLY}
  }
   
  printf("%d/%d/%.2d is the earliest date\n", edd, emm, eyy);

  return 0;
}
