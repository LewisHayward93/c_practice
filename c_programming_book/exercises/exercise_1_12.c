#include <stdio.h>

// use constants to show whether the current char is inside a word or not
#define IN 1
#define OUT 0

/*
** simple program to print input words one line at a time
*/

int main(void) {

  int c, state;

  // initial state is outside of a word
  state = OUT;

  while ((c = getchar()) != EOF) {
    // if the char is not one of those listed, putchar and declare inside word
    if (c != '\n' && c != ' ' && c != '\t') {
      putchar(c);
      state = IN;
      // given state true is IN, if come across newline, tab or space we know we
      // now need newline
    } else if (state) {
      putchar('\n');
      // reset state to outside
      state = OUT;
    }
  }
  return 0;
}
