// copyright 2017 karthik

#include <stdio.h>
int main(void) {
  int i, j, k;

  i = 5; j = 3;
  printf("i / j = %d and i %% j = %d\n", i / j, i % j);
  printf("%d and %d\n", (-i) / j, (-i / j));


  printf("enter a 3 digit number: ");
  scanf("%d", &k);

  i = (k / 10) % 10;
  printf("%d %d %d\n", k % 10, i, k / 100);
  return 0;
}
