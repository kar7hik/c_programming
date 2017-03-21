
// Copyright 2017 Karthik

#include <stdio.h>
#include <string.h>

#define FIRST_NAME_LEN 20
#define LAST_NAME_LEN 20


int main(void) {
  struct person_name {
    char first[FIRST_NAME_LEN + 1];
    char middle_initial;
    char last[LAST_NAME_LEN+ 1];
  };


  struct student {
    struct person_name name;
    int id, age;
    char sex;
  } student1, student2;

  //  printf("enter the first name: ");
  strcpy(student1.name.first, "karthik");

  printf("first name: %s\n", student1.name.first);

  
  printf("compiled on %s at %s on %s\n", __DATE__, __TIME__, __FILE__);
  return 0;
  
}
