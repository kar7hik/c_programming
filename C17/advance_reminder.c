
// Copyright 2017 Karthik

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60


int read_line(char str[], int n);
void print_current_word(char *ptr, int n);


int main(void) {
  char *reminders[MAX_REMIND];
  char day_str[3], msg_str[MSG_LEN + 1];
  int i, j, day, num_remind = 0;

  for (;;) {
    if (num_remind == MAX_REMIND) {
      printf("Out of memory!\n");
    }

    printf("enter day and reminder: ");
    scanf("%2d", &day);

    if (day == 0)
      break;

    sprintf(day_str, "%2d", day);
    read_line(msg_str, MSG_LEN);

    for (i = 0; i < num_remind; i++)
      if (strcmp(day_str, reminders[i]) < 0)
        break;
    for (j = num_remind; j > i; j--)
      reminders[j] = reminders[j - 1];

    reminders[i] = malloc(2 + strlen(msg_str) + 1);
    if (reminders[i] == NULL) {
      printf("ERROR: malloc failed!\n");
      break;
    }

    strcpy(reminders[i], day_str);
    strcat(reminders[i], msg_str);

    num_remind++;
  }

  for (i = 0; i < num_remind; i++) {
    print_current_word(reminders[i], MSG_LEN);
  }
  
  return 0;
}


int read_line(char str[], int n) {
  int i = 0;
  char ch;

  while ((ch = getchar()) != '\n')
    if (i < n)
      str[i++] = ch;

  str[i] = '\0';
  return i;
}


void print_current_word(char *ptr, int n) {
  int  i = 0;

  while (*ptr != '\0' && i < n) {
    printf("%c", *ptr++);
    i++;
  }
  printf("\n");
}
