
// Copyright 2017 Karthik


/*
  sorting algorithm - quicksort

  -> takes an array input from user and sort them
  
 */


#include <stdio.h>
#include <time.h>
#include <ctype.h>

#define N 10


void swap(int a[], int first, int second);
int partition(int a[], int start, int end);
void quicksort(int a[], int start, int end);


int main(void) {
  clock_t tic = clock();
  //  int a[N] = {10, 3, 6, 7, 12, 15, 18, 1, 23, 9};
  int a[N];
  int i = 0;


  // getting input from user
  printf("enter the %d numbers to be sorted: \n", N);
  while (i < N) {
    scanf("%d", &a[i]);
    i++;
  }
  

  // printing original array
  printf("original array: ");
  for (i = 0; i < N; i++) {
      printf("%d  ", a[i]);
  }
  printf("\n");

  
  // calling quicksort function
  quicksort(a, (N - N), (N - 1));
  
  // printing sorted array
  printf("sorted array: ");
  for (i = 0; i < N; i++) {
    printf("%d  ", a[i]);
  }
  printf("\n");

  
  clock_t toc = clock();

  // printing time elapsed
  printf("elapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);

  return 0;
}


void quicksort(int a[], int start, int end) {
  int pivot;  // pivot element

  if (start < end) {
    pivot = partition(a, start, end);
    quicksort(a, start, (pivot - 1));
    quicksort(a, (pivot + 1), end);
  }
}


int partition(int a[], int start, int end) {
  int p_index = start;  // swa
  int pivot = a[end];
  int i;
  
  for (i = start; i < end; i++) {
    if (a[i] <= pivot) {
      swap(a, i, p_index);
      p_index++;
    }
  }
  swap(a, p_index, end);

  return p_index;
}


void swap(int a[], int first, int second) {
  int temp;

  temp = a[first];
  a[first] = a[second];
  a[second] = temp;
}
