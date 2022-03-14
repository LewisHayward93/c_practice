#include <stdio.h>

/*
** simple program to print out an array of digits taken from input stream;
** also counts the whitespace and anything other than an integer
*/

int main(void) {

  int c, i, nwhite, nother;

  int ndigit[10]; // creates an integer array of size 10

  nwhite = nother = 0;

  for (i = 0; i < 10; ++i)
    ndigit[i] = 0; // fill the array with 0's

  while ((c = getchar()) != EOF)
    if (c >= '0' && c <= '9')
      // increment the value at the index of the input value by one to count the
      // occurences
      ++ndigit[c - '0'];
    else if (c == ' ' || c == '\n' || c == '\t')
      ++nwhite;
    else
      ++nother;

  printf("digits: ");
  for (i = 0; i < 10; ++i)
    printf(" %d", ndigit[i]);
  printf(", whitespace: %d, other: %d\n", nwhite, nother);

  return 0;
}
