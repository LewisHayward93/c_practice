#include <stdio.h>

/*
** simple program to count the number of blanks, tabs or spaces in the input
*/

int main(void) {

  int c, ign;

  ign = 0;

  while ((c = getchar()) != EOF) {
    // check to see if the input is next line or tabs; || operator used for OR
    if (c == '\n' || c == '\t' || c == ' ')
      ++ign;
  }

  printf("%d\n", ign);

  return 0;
}
