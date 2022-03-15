#include <stdio.h>

int power(int m, int n); // function prototype for the power function below

/*
** simple program to test the power function found in std library
*/

int main(void) {

  int i;

  printf("|%6d|%6d|%6d|\n", 0, 2, -3);
  printf("|--------------------|\n");

  for (i = 0; i < 10; ++i)
    printf("|%6d|%6d|%6d|\n", i, power(2, i), power(-3, i));

  return 0;
}

/* power: raise base to n-th power; n >= 0  */
int power(int base, int n) {
  int i, p;

  p = 1;
  for (i = 1; i <= n; ++i)
    p = p * base;
  return p;
}