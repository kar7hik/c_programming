
// Copyright 2017 Karthik

#include <stdio.h>

int largest_element(int a[], int n);
void swap(int a[], int first, int second);
void display_array(int a[], int n);
void shift(int a[], int n, int max_index);

#define N 5

int main(void) {
  int a[N], i;
  printf("enter the elements: ");

  for (i = 0; i < N; i++) {
    scanf("%d", &a[i]);
  }
  printf("\n");

  for (i = N - 1; i > 0; i--) {
    int index = largest_element(a, i);
    //  printf("%d\n", a[index]);
    //    swap(a, index, i);
    shift(a, N, index);
  }

  display_array(a, N);
  return 0;
}


int largest_element(int a[], int n) {
  int i, largest;
  int largest_index = 0;

  largest = a[0];

  for (i = 0; i < n; i++) {
    if (largest < a[i])
      largest_index = i;
  }
  
  return largest_index;
}

void shift(int a[], int n, int max_index) {
  int i;

  for (i = max_index + 1; i < n; i++) {
    a[i-1] = a[i];
  }
  a[n-1] = a[max_index];
}


void swap(int a[], int first, int second) {
  int temp = a[first];
  a[first] = a[second];
  a[second] = temp;
}

void display_array(int a[], int n) {

  int i;
  
  for (i = 0; i < n; i++) {
    printf("%d  ", a[i]);
  }
  printf("\n");

}
