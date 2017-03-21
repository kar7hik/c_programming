
// Copyright 2017 Karthik

#include <stdio.h>
#include <math.h>
#include <time.h>

// getting input number from user
int ask_number() {

  int number;
  
  printf("enter the number: ");
  scanf("%d", &number);
  return number;
}

// initializing prime array with value 1
void init_array(int prime[], int length) {

  int i;
  prime[0] = 0; prime[1] = 0;

  for (i = 2; i < length; i++) {
    prime[i] = 1;
  }
}

// printing prime numbers
void print_primes(int prime[], int length) {

  int i;

  for (i = 0; i < length; i++)
    if (prime[i] == 1)
      printf("%d  ", i);
  printf("\n");
  
}

// identifying prime numbers using sieve of eratosthene
void sieve_eratosthene(int prime[], int length) {

  int i, j;
  // for (i = 2; i < length; i++) {
  for (i = 2; i < sqrt(length); i++) {
    // printf("%f\n", sqrt(length));
    for (j = i * i; j < length; j += i) {
      prime[j] = 0;
      // printf("prime[%d] = 0\n", j);
    }
  }
}


// main function
int main(void) {
  clock_t tic = clock();
  int i, j;
  int value = ask_number();
  // int value = 10;

  int prime[value];
  init_array(prime, value);
  sieve_eratosthene(prime, value);
  print_primes(prime, value);


  clock_t toc = clock();

  printf("elapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);
  
  return 0;
}
