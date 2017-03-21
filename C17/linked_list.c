
// Copyright 2017 Karthik

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct node {
  int value;
  struct node *next;
};



struct node *add_to_list(struct node *list, int n) {
  struct node *new_node;

  new_node = malloc(sizeof(struct node));
  if (new_node == NULL) {
    printf("Error: malloc failed\n");
    exit(EXIT_FAILURE);
  }

  new_node->value = n;
  new_node->next = list;

  return new_node;
}


int main(void) {
  
  return 0;
}
