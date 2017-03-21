
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


struct node *read_numbers(void) {
  struct node *first = NULL;
  int n;

  printf("Enter a series of integers (0 to terminate): ");

  for (;;) {
    scanf("%d", &n);

    if (n == 0)
      return first;
    first = add_to_list(first, n);
  }
}

struct node *search_list(struct node *list, int n) {
  struct node *p;
  /*
  for (p = list; p != NULL; p = p->next)
    if (p->value == n)
      return p;
  return NULL;
  */

  /*
  for (; list != NULL; list = list->next)
    if (list->value == n)
      return list;
  return NULL
  */

  /*
  for (; list != NULL && list->value != n; list = list->next)
    ;
  return list;
  */

  while (list != NULL && list->value != n)
    list = list->next;
  return list;
  
}


struct node *delete_from_list(struct node *list, int n) {
  struct node *cur, *prev;

  for (cur = list, prev = NULL;
       cur != NULL, cur->value != n;
       prev = cur, cur = cur->next) {
  }  // empty loop
  
  if (cur == NULL)
    return list;   // n was not found

  if (prev == NULL)
    list = list->next;  // n is in the first node.
  else
    prev->next = cur->next;   // n is in some other node

  free(cur);
  
  return list;
}


int main(void) {
  struct node *first;
  first = NULL;

  read_numbers();
  printf("enter the value to be found: ");
  int value;
  scanf("%d", &value);

  printf("%p\n", search_list(first, 25));

  return 0;
}

