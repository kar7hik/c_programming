
// Copyright 2017 Karthik

#include <stdio.h>

#define N 10

int main(void) {
  int a[N];
  int *p;

  int i;

  printf("enter %d numbers: ", N);

  for (p = a; p < a + N; p++) {
    scanf("%d", p);
  }

  printf("In reverse order: \n");

  for (p = a + N - 1; p >= a; p--) {
    printf("%d\n", *p);
  }


  /*
********************************************************
    this is absoultely weird behavior:
     it prints same values as a[i];

     compiler treats i[a] as *(i+a), which is same
     as *(a+i) is equivalent to a[i].

     never use this unless you delibrately want to
     confuse the reader."


  printf("\n");
  for (i = 0; i < N; i++) {
    printf("%d\n", i[a]);
  }
********************************************************
  */
  
  printf("\n\n");
  return 0;
}
