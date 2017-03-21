
// Copyright 2017 Karthik

#include <stdio.h>
#define ROW 5
#define COL 5

int main(void) {
  int a[ROW][COL] = {};
  int i, j;
  int row_total[ROW], col_total[COL];

  for (i = 0; i < ROW; i++) {
    printf("enter row %d: ", i + 1);
    for (j = 0; j < COL; j++) {
      scanf("%d", &a[i][j]);
      row_total[i] += a[i][j];
      col_total[j] += a[i][j];
    }
  }

  printf("row totals: ");
  for (i = 0; i < ROW; i++) {
    printf("%d  ", row_total[i]);
  }

  printf("\n");
  
  printf("column totals: ");
  for (i = 0; i < COL; i++) {
    printf("%d  ", col_total[i]);
  }
  printf("\n");
  
  return 0;
}
