
// Copyright 2017 Karthik


#include <stdio.h>

#define ROW 4
#define COL 4

void setting_value(int *m_ptr, int row, int col);
void print_matrix(int *m_ptr, int row, int col);
void print_col(int (*m_ptr)[COL], int row, int col);


int mat[ROW][COL];
int main(void) {


  printf("address of mat's 1st elem = %p\n", mat);
  printf("address of mat's 1st elem = %p\n", mat[0]);
  printf("address of mat's 1st elem = %p\n", &mat[0][0]);

  printf("\n\naddress of mat's last elem = %p\n", &mat[ROW-1][COL-1]);
  printf("address of mat's last elem = %p\n", mat[ROW-1] + (COL-1));


  int *ptr;
  printf("\n\n\n");
  int i = 0;
  for (ptr = mat[0]; ptr <= &mat[ROW-1][COL-1]; ptr++) {
    if ((i % 4) == 0)
      printf("\n");
    printf("%p   ", ptr);
    i++;
  }
  printf("\n\n\n");


  setting_value(mat[0], ROW, COL);
  print_matrix(mat[0], ROW, COL);
  print_col(&mat[0], ROW, COL);


  return 0;
}
      
void setting_value(int *m_ptr, int row, int col) {
  int j = 1;

  printf("m_ptr = %p\n", m_ptr);

  for (m_ptr; m_ptr <= mat[row-1]+(col-1); m_ptr++) {
    *m_ptr = j;
    j++;
  }
}


void print_matrix(int *m_ptr, int row, int col) {
  int i = 0;
  for (m_ptr; m_ptr <= mat[row-1]+(col-1); m_ptr++) {
    if ((i % col) == 0)
      printf("\n");
    printf("%2d   ", *m_ptr);
    i++;
  }
  printf("\n\n");
  
}


void print_col(int (*m_ptr)[COL], int row, int col) {
  for (m_ptr; m_ptr < &mat[row]; m_ptr++)
    printf("%2d\n", **(m_ptr));

}
