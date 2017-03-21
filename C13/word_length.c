
// Copyright 2017 Karthik


/* Header files */
#include <stdio.h>
#include <string.h>
#include <math.h>

/* Macros */
#define MAX_NUM_WORDS 3
#define MAX_LENGTH 5


/* Global variables */
char words[MAX_NUM_WORDS][MAX_LENGTH];
char largest[MAX_LENGTH], smallest[MAX_LENGTH];


/* Function Prototype */
int read_line(char str[], int n);
void print_row_elements(char *p, int row);
void add_row_elements(char *p, int row, char str[]);


/* Main function */
int main(void) {
  clock_t tic = clock();
  
  char word[MAX_LENGTH], ch;
  char *ptr_words = &words[0][0];
  int i;

  char *row_processing = words[0];

  int word_count = 0;
  
  printf("Enter word: ");


  while (read_char(word, MAX_LENGTH) != 4) {
    for (i = 0; i < MAX_NUM_WORDS; i++) {
      add_row_elements(words[i], i, word);
      
    }
    word_count++;
  }
  

  /*
  while (read_char(word, MAX_LENGTH) != 4) {
    for (ptr_words; ptr_words <= &words[MAX_NUM_WORDS-1][MAX_LENGTH-1];
         ptr_words++) {
      for (i = 0; word[i] != '\0'; i++) {
        *ptr_words = word[i];
      }
      *ptr_words = '\0';
      word_count++;
    }
  }
  */


  printf("word count = %d\n", word_count);

  for (i = 0; i < word_count; i++) {
    print_row_elements(words[i], i);
  }
  
  printf("\n");

  clock_t toc = clock();
  printf("elapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);
  
  return 0;
}


void print_row_elements(char *p, int row) {

  /*
  for (p; p < words[row] + MAX_LENGTH; p++) {
    printf("%c", *p);
  }
  */

  printf("words: \n");
  while (*p != '\0' && p < words[row] + MAX_LENGTH) {
    printf("%c\n", *p++);
  }
}


int read_char(char str[], int n) {
  int i = 0, j;
  char ch;
  
  while ((ch = getchar()) != '\n' && i < MAX_LENGTH) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
    // if (isalpha(ch)) {
      str[i++] = ch;
    }
  }
  str[i] = '\0';

  /*
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
      
      printf("%c is added \n", str[i]);
  }
  *p = '\0';
}
