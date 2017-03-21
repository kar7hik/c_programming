
// Copyright 2017 Karthik

#include <stdio.h>

int quicksort(int a[], int first, int last);
int partition(int a[], int first, int last);

int main(void) {
  int a[7] = {2, 5, 1, 8, 7, 4, 9};
  int i;

  printf("original array: ");
  for (i = 0; i < 7; i++) {
    printf("%d  ", a[i]);
  }
  printf("\n");
  
  quicksort(a, 0, 6);
  //  printf("%d\n", a[partition(a, 0, 6)]);

  printf("\nsorted array: ");

  for (i = 0; i < 7; i++) {
    printf("%d  ", a[i]);
  }

  printf("\n");
  return 0;
}

int quicksort(int a[], int first, int last) {
  int q;
  printf("first and last is %d  and  %d\n", first, last);
  if (first < last) {
    q = partition(a, first, last);
    printf("index = %d \n", q);
    quicksort(a, first, (q - 1));
    quicksort(a, (q + 1), last);
  }
}

int partition(int a[], int first, int last) {
  int x = a[last];
  int i = first - 1;
  // printf("%d\n", i);
  int j;
  
  for (j = first; j <= (last - 1); j++) {
    if (a[j] <= x) {
      i = i + 1;
      a[i] = a[j];
    }
  }
  a[i+1] = a[last];
  return i + 1;
}
