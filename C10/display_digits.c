
// Copyright 2017 Karthik


/* header files */
#include <stdio.h>
#include <ctype.h>

/* macros */
#define NUM_SEGMENTS 7
#define CHAR_WIDTH 3
#define CHAR_HEIGHT 4
#define MAX_DIGITS 34
#define COLUMNS (CHAR_WIDTH * MAX_DIGITS)


const int segments_per_character[10][NUM_SEGMENTS] = {
  {1, 1, 1, 1, 1, 1, 0}, /* 0 */
  {0, 1, 1, 0, 0, 0, 0}, /* 1 */
  {1, 1, 0, 1, 1, 0, 1}, /* 2 */
  {1, 1, 1, 1, 0, 0, 1}, /* 3 */
  {0, 1, 1, 0, 0, 1, 1}, /* 4 */
  {1, 0, 1, 1, 0, 1, 1}, /* 5 */
  {1, 0, 1, 1, 1, 1, 1}, /* 6 */
  {1, 1, 1, 0, 0, 0, 0}, /* 7 */
  {1, 1, 1, 1, 1, 1, 1}, /* 8 */
  {1, 1, 1, 1, 0, 1, 1}  /* 9 */
};

// segment numbering
/*
      0
     ---
   5|   |1
    | 6 |
     ---
   4|   |2
    | 3 |
     ---

 */

// segment position

/*
      0 1 2
    0  
    1
    2
 */

// Segment position in a 3x3 grid
const int segment_coordinates[NUM_SEGMENTS][2] = {
  {0, 1},
  {1, 2},
  {2, 2},
  {2, 1},
  {2, 0},
  {1, 0},
  {1, 1}
};


/* global variables */
char digits[CHAR_HEIGHT][COLUMNS];

/* function prototype */
void clear_digits_array();
void process_digit(int digit, int position);
void print_digits_array(int row_size);


/* main function */
int main(void) {
  char ch;
  int converted_char;
  int digit_count = 0;

  clear_digits_array();

  printf("Enter a %d digit number: ", MAX_DIGITS);

  while ((ch = getchar()) != '\n' && digit_count < MAX_DIGITS) {
    if (isdigit(ch)) {
      converted_char = (int) ch - '0';
      process_digit(converted_char, (CHAR_WIDTH * digit_count));
      digit_count++;
    }
  }

  print_digits_array(CHAR_WIDTH * digit_count);
  
  return 0;
}

void clear_digits_array() {
  int i, j;

  for (i = 0; i < CHAR_HEIGHT; i++) {
    for (j = 0; j < COLUMNS; j++) {
      digits[i][j] = ' ';
    }
  }
}

void process_digit(int digit, int position) {
  int row, col, segment;
  char display[NUM_SEGMENTS] = "_||_||_";

  for (segment = 0; segment < NUM_SEGMENTS; segment++) {
    if (segments_per_character[digit][segment]) {
      row = segment_coordinates[segment][0];
      col = position + segment_coordinates[segment][1];

      digits[row][col] = display[segment];
    }
  }
}

void print_digits_array(int row_size) {
  int row, col;

  for (row = 0; row < CHAR_HEIGHT; row++) {
    for (col = 0; col < row_size; col++) {
      printf("%c", digits[row][col]);
    }
    printf("\n");
  }
}




