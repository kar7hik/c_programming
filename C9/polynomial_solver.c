/*
  normal way of calculating polynomial equation;

  for more effient implementation see polynomial_square.c

 */

// Copyright 2017 Karthik

#include <stdio.h>
#include <time.h>

double polynomial(double x, int n);

int main(void) {
  clock_t tic = clock();
  int n;
  double x, poly;

  printf("enter the x value: ");
  scanf("%lf", &x);

  poly = 3 * polynomial(x, 5) + 2 * polynomial(x, 4) - 5 * polynomial(x, 3)
      -  polynomial(x, 2) + 7 * polynomial(x, 1) - 6 * polynomial(x, 0);

  printf("%.2lf\n", poly);

  clock_t toc = clock();

  printf("elapsed: %f seconds\n", (double)(toc-tic) / CLOCKS_PER_SEC);
  return 0;
}


double polynomial(double x, int n) {
  if (n == 0)
    return 1;
  else
    return x * polynomial(x, n - 1);

}
