
// Copyright 2017 Karthik

#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int readline(char str[], int n);


int main(void) {
  char reminders[MAX_REMIND][MSG_LEN + 3];  // 2 for day & 1 for null
  char day_str[3], msg_str[MSG_LEN + 1];
  int day, i, j, num_remind = 0;

  for (;;) {
    if (num_remind == MAX_REMIND) {
      printf("-- No space left --\n");
      break;
    }

    printf("Enter day and reminder: ");
    scanf("%2d", &day);

    if (day == 0)
      break;

    sprintf(day_str, "%2d", day);
    readline(msg_str, MSG_LEN);

    for (i = 0; i < num_remind; i++)
      if (strcmp(day_str, reminders[i]) < 0)
        break;

    for (j = num_remind; j > i; j--)
      strcpy(reminders[j], reminders[j - 1]);

    strcpy(reminders[i], day_str);
    strcat(reminders[i], msg_str);

    num_remind++;
  }

  printf("\nDay reminder\n");

  for (i = 0; i < num_remind; i++) {
    printf(" %s\n", reminders[i]);
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

