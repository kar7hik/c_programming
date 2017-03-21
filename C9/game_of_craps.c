
// Copyright 2017 Karthik

#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>

#define DICE 6

bool play_game();
int roll_dice();

int main(void) {
  char play_again;
  int wins = 0;
  int losses = 0;
  
  printf("this is game of craps.\n");
  printf("please hit enter to start the game!\n");

  do {
    if (play_game())
      wins++;
    else
      losses++;
    printf("play again? (y/n): \n");
    scanf(" %c", &play_again);
  } while (play_again == 'y' || play_again == 'Y');
  
  printf("wins: %3d   losses: %3d\n", wins, losses);
  
  return 0;
}

int roll_dice() {
  return (rand() % (DICE+DICE-1)) + 2;
}

bool play_game() {
  int trial, sum;
  bool points_table[DICE+DICE+1] = {0};

  srand((unsigned) time(NULL));

  //  for trial check.
  for (trial = 1; ; trial++) {
    while (getchar() != '\n') {}

    sum = roll_dice();
    switch (sum) {
      case 2: case 3: case 12: {
        printf("you rolled: %d\n\n", sum);
        printf("you lose\n");
        return false;
      }
      case 7: case 11: {
        if (trial == 1) {
          printf("you rolled %d on first roll.\n\n", sum);
          printf("you win\n");
          return true;
        } else if ((sum == 7 || sum == 11) && trial != 1) {
          printf("you rolled %d more than once\n", sum);
          printf("you lose\n");
          return false;
        }
      }
      default: {
        if (points_table[sum] == true) {
          //  checking point table for repeated sum.
          printf("you rolled %d\n", sum);
          printf("you win\n");
          return true;
        } else {
          //  if no repeatition print point value and
          //  assign 1 in that place.
          printf("you rolled %d\n", sum);
          printf("you point is %d\n", sum);
          points_table[sum] = true;
          
        }
      }
    }
  }
}
