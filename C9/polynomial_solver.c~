
// Copyright 2017 Karthik

#include <stdio.h>

double polynomial(double x, int n);

int main(void) {
  int n;
  double x, poly;

  printf("enter the x value: ");
  scanf("%lf", &x);

  poly = 3 * polynomial(x, 5) + 2 * polynomial(x, 4) - 5 * polynomial(x, 3)
      -  polynomial(x, 2) + 7 * polynomial(x, 1) - 6 * polynomial(x, 0);

  printf("%.2lf\n", poly);

  return 0;
}


double polynomial(double x, int n) {
  if (n == 0)
    return 1;
  else
    return x * polynomial(x, n - 1);

}
