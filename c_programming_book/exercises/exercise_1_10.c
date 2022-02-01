#include <stdio.h>

/*
** simple program to replace a newline, tab or / by it's corresponding escape
*sequence
*/

int main(void) {

  int c, d;

  while ((c = getchar()) != EOF) {
    d = 0;
    if (c == '\t') {
      putchar('\\');
      putchar('t');
      d = 1;
    }
    if (c == '\b') {
      putchar('\\');
      putchar('b');
      d = 1;
    }
    if (c == '\\') {
      putchar('\\');
      putchar('\\');
      d = 1;
    }
    if (d == 0)
      putchar(c);
  }

  return 0;
}
