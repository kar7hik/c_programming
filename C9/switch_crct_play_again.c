
// Copyright 2017 Karthik

#include <stdio.h>
#include <time.h>
#include <stdbool.h>

bool play_option();
int roll_dice();

int main(void) {
  play_game();
  printf("\n");

  printf("okay see you soon:\n");
  return 0;
}

bool play_option() {
  char ch;
  bool option = false;
  do {
    printf("play again (y/n): ");
    scanf(" %c", &ch);
    switch (toupper(ch)) {
      case 'Y': case 'y': {
        option = true;
        break;
      }
      case 'N': case 'n': {
        option = false;
        break;
      }
      default: {
        break;
      }
    }
  } while (option);
  
}
    
