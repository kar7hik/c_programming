// copyright 2017 karthik

#include <stdio.h>

int main(void) {
  int i, j, k;
  i = 2; j = 3;
  k = i * j == 6;  // 1st multi. 2 * 3 = 6;
  // now 6 == 6; so it becomes true. hence k = 1;

  

  int value = 6;
  int f;
  f = value == 5;  // results in 0;
  printf("%d\n", k);
  printf("f = %d\n", f);

  i = 5; j = 10; k = 1;
  printf("%d\n", k < i > j);  // k < i = 1 < 5 == true
  // 1 > j => 1 > 10 => false (0)

  i = 3; j = 4; k = 1;
  printf("%d\n", i < j == j < k);  // i < j => 3 < 4 == true
  // j < k => 4 < 1 == false; false != true;

  i = 3, j = 4; k = 5;
  printf("%d\n", i % j + i < k);

  return 0;

  
}

