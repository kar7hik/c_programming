
// Copyright 2017 Karthik

#include <stdio.h>

#define N 3

void display_sqaure(int a[][N], int row);


int main(void) {

  int a[N][N], i, j, size;

  printf("enter the size of magic square (nxn): ");
  scanf("%d", &size);

  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      a[i][j] = 0;
    }
  }

  //  display_sqaure(a
  
  return 0;
}

void display_sqaure(int a[][col], int row) {
  int i, j;

  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      if (j % 2 == 0)
        printf("\n");
      printf("%d  ", a[i][j]);
    }
  }
}
