// copyright 2017 karthik

#include <stdio.h>

int main(void) {
  int a, b, c, d, max, min;

  printf("enter four integers: ");
  scanf("%d %d %d %d", &a, &b, &c, &d);

  max = a; min = a;

  if (b > max) max = b;
  else if (b < min) min = b;

  if (c > max) max = c;
  else if (c < min) min = c;

  if (d > max) max = d;
  else if (d < min) min = d;

  printf("Largest: %d\nSmallest: %d \n", max, min);
  return 0;
}
