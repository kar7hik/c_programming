/*
  time and computational efficent sqaure method for calculating polynomial equation
 */

// Copyright 2017 Karthik

#include <stdio.h>
#include <time.h>

// int old_power(int x, int n);
int even_power(int x, int n);

int main(void) {
  clock_t tic = clock();
  int x, n;
  double poly = 0.0f;

  printf("enter the x value: ");
  scanf("%d", &x);

  poly = 3 * even_power(x, 5) + 2 * even_power(x, 4) - 5 * even_power(x, 3)
      -  even_power(x, 2) + 7 * even_power(x, 1) - 6 * even_power(x, 0);

  printf("%.2lf\n", poly);

  clock_t toc = clock();
  printf("elapsed: %f seconds\n", (double)(toc-tic) / CLOCKS_PER_SEC);
  return 0;
}

/*
int old_power(int x, int n) {
  if (n == 0)
    return 1;
  else
    return x * old_power(x, n-1);
}
*/
int even_power(int x, int n) {
  if (n == 0)
    return 1;
  else if ((n % 2 == 0))
    return even_power(x, n/2) * even_power(x, n/2);
  else
    return x * even_power(x, n - 1);
}
