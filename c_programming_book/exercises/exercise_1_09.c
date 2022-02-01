#include <stdio.h>

/*
** simple program to copy the input to the output;
** replacing any single or double blanks as single blanks
*/

int main(void) {

  char c;
  char last_c;

  while ((c = getchar()) != EOF) {
    // a single blank char (space between words) is printed given the previous
    // char is not a blank
    if (c != ' ' || last_c != ' ')
      putchar(c);

    last_c = c;
  }

  return 0;
}
