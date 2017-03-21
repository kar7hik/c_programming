
// Copyright 2017 Karthik

/* Header files */
#include <stdio.h>
#include <string.h>
#include <time.h>


/* Macros */
#define MAX_NUM_WORDS 20
#define MAX_LENGTH 20


/* Global variables */
char words[MAX_NUM_WORDS][MAX_LENGTH];
char largest_word[MAX_LENGTH];
char smallest_word[MAX_LENGTH];
char word[MAX_LENGTH];

/* Function Prototype */
int read_line(char str[], int n);
void print_row_elements(char *p, int row);
void add_row_elements(char *p, int row, char str[]);
void print_current_word(char *p, int row);
void check_length(int n);

/* Main function */
int main(void) {
  clock_t tic = clock();
  char ch;
  int i = 0;
  int word_count = 0;
  int word_len = 0;

  
  while ((word_len = read_char(word, MAX_LENGTH)) != 4 &&
         word_count < MAX_NUM_WORDS) {
    // print_current_word(word, MAX_LENGTH);
    check_length(word_len);
    add_row_elements(words[i], i, word);
    word_count++;
    i++;
  }
    
  // printf("word count = %d\n", word_count);

  /*
  printf("words: \n");
  for (i = 0; i < word_count; i++) {
    print_row_elements(words[i], i);
  }
  */
  
  printf("\n");
  
  printf("Largest: ");
  i = 0;
  while (i < MAX_LENGTH && largest_word[i] != '\0') {
    printf("%c", largest_word[i++]);
  }
  printf("\n");

  
  printf("smallest: ");
  i = 0;
  while (i < MAX_LENGTH && smallest_word[i] != '\0') {
    printf("%c", smallest_word[i++]);
  }
  printf("\n");

  clock_t toc = clock();
  printf("elapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);
  return 0;

}

/*
  reads the character and store it in word[]


  status : normal behavior
 */


int read_char(char str[], int n) {
  int i = 0, j;
  char ch;

  printf("Enter word: ");
  while ((ch = getchar()) != '\n' && i < MAX_LENGTH) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
    // if (isalpha(ch)) {  // alternate way of checking.
      str[i++] = ch;
    }
  }
  str[i] = '\0';

  /*

    for testing purpose: prints the string entered.
    
  for (j = 0; j < i; j++) {
    printf("%c", str[j]);
  }
  
  */

  return i;
  
  // printf("\nletter count: %d\n", counter);
  
}


void add_row_elements(char *p, int row, char str[]) {

  int i = 0;
  for (p; p < words[row] + MAX_LENGTH; p++) {
    *p = str[i++];
  }
  *p = '\0';
}


/*
  prints the current word from 2D array.

  status: normal behavior
 */

void print_row_elements(char *p, int row) {

  while (*p != '\0' && p < words[row] + MAX_LENGTH) {
    printf("%c", *p++);
  }
  printf("\n");
}


/*
  prints the current word read by read_char()


  status : normal behavior
 */

void print_current_word(char *p, int row) {
  printf("current word is: ");
  int i;

  while (*p != '\0' && p < &word[row]) {
    printf("%c", *p++);
  }
  printf("\n");
}

void check_length(int n) {
  int i;
  
  if (strlen(largest_word) == 0) {
      strcpy(smallest_word, strcpy(largest_word, word));
    }
    if (strcmp(word, largest_word) > 0)
      strcpy(largest_word, word);
    if (strcmp(word, smallest_word) < 0)
      strcpy(smallest_word, word);
}

