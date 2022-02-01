#include <stdio.h>

/*
 * simple program to count the number of characters;
 * first version with while loop
 */

int main(void) {

  long nc;

  nc = 0;

  while (getchar() != EOF)
    ++nc;
  printf("%ld\n", nc);

  return 0;
}
