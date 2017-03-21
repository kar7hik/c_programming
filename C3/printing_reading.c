// Copyright 2017 Karthik

#include <stdio.h>

int main(void) {

  printf("i am %s, %d years old\n", "karthik", 24);

  // %m.pX - m (minimum field width), p (precision), X (conversion specifier)

  // m - specifies minimum no of characters to print.
  // %4d - 123 as *123. where * is space.
  // if the value to printed requires more than m characters, the field
  // width automatically expands. ex - %4d -> 12345 as 12345 -- no digit lost.
  int day, month, year;
  float price;
  int item_no;
  
  printf("enter item number: ");
  scanf("%d", &item_no);

  printf("enter unit price: ");
  scanf("%f", &price);

  printf("enter purchase date (dd/mm/yyyy): ");
  scanf("%2d/%2d/%4d", &day, &month, &year);

  /*

  printf("%-10s**********%-10s %-10s \n %9s %-10s %-10s \n", "item", "unit",
         "purchase", " ", "price", "date");
  char slash = '/';
  printf("%-10d %-11.3f %10d%c\n", item_no, price, day, slash);

  */

  printf("********************************\n");
  printf("Item\t\tUnit\t\tPurchase\n");
  printf("\t\tPrice\t\tDate\n");  // tab - 8 spaces
  printf("%-3d\t\t$%7.2f\t%2.2d/%2.2d/%4.4d\n",
         item_no, price, day, month, year);
  return 0;
}
