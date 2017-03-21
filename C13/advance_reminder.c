
// Copyright 2017 Karthik
/*
  Algorithm:

  reading input from user.
  compare reminders for dictionary mode and sort.

*/


/* Header files */
#include <stdio.h>
#include <string.h>
#include <time.h>


/* Macros */
#define MAX_REMIND 50
#define MSG_LEN 60


/* Function prototypes */
int readline(char str[], int n);
void analyse_array();


/* Global variables */
char reminders[MAX_REMIND][MSG_LEN];
char day_str[MSG_LEN], msg_str[MSG_LEN];
int day, month, minute, hour, num_remind = 0;


/* Main function */
int main(void) {
  
  for (;;) {
    if (

  }
  
  return 0;
}


int readline(char str[], int n) {
  int ch, i = 0;

  while ((ch = getchar()) != '\n')
    if (i < n)
      str[i++] = ch;
  str[i] = '\0';
  return i;
}

void analyse_array() {
  int i, j;

  for (i = 0; i < num_remind; i++)
    if (strcmp(day_str, reminders[i]) < 0)
      break; // breaking WHAT!!! idiot

  for (j = num_remind; j > i; j--)
    strcpy(reminders[j], reminders[j - 1]);

  strcpy(reminders[i], day_str);
  strcat(reminders[i], msg_str);
  num_remind++;
}
