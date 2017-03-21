
// Copyright 2017 Karthik

#include <stdio.h>
#define ROW 3
#define COL 4


void print_col_array(int (*ptr)[COL], int row);
void print_row_elements(int *p, int row);

int words[ROW][COL];

int main(void) {
  int *ptr_words;
  int i, j;

  // ptr_words = words[0];  // using row processing
  //  int (*y_ptr_words)[COL] = words;  // using col processing

  int (*y_ptr_words)[COL];
  int *y_ptr;
  
  i = 1;

  // setting values
  for (y_ptr = &words[0][0]; y_ptr <= &words[ROW-1][COL-1]; y_ptr++) {
    printf("%d. %p\n", i, y_ptr);
    *y_ptr = i; i++;
  }

  // calling print_col func
  print_col_array(&words[0], ROW);

  // calling print_row func
  for (i = 0; i < ROW; i++) {
    printf("\n%d row:\t", i);
    print_row_elements(words[i], i);
  }
  printf("\n");
  
  return 0;
}


void print_col_array(int (*ptr)[COL], int row) {
  
  for (ptr; ptr < &words[row]; ptr++) {
    printf("%p\t", ptr);
    printf("%d\n", **(ptr));
  }
  
}


void print_row_elements(int *p, int row) {

  int i = 0;
  for (p; p < words[row] + COL; p++) {
    printf("%d\t", *p);
  }
}


// no change has been made.. output => array

