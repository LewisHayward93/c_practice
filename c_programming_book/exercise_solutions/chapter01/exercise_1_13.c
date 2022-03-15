#include <stdio.h>

/*
** program to print a histogram of the lengths of words of its input;
** horizontal bars for histogram
*/

#define IN 1
#define OUT 0

int main(void) {

  int c, i, j, cnt, state;
  int wlength[11]; // we will be ignoring 0th position

  state = IN; // current state as in word as expecting first input to be a word

  cnt = 0;

  for (i = 0; i < 11; ++i)
    wlength[i] = 0; // fill the array with 0's

  while ((c = getchar()) != EOF) {
    ++cnt; // increment count
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT; // change state to outside a word
      --cnt;       // decrement count as already incremented pre if statement
    }
    if (state == OUT) {
      if (cnt < 10) // max on the length
        ++wlength[cnt];
      state = IN; // change the state
      cnt = 0;    // reset count to zero as post non-char
    }
  }

  // create horizontal histogram
  for (i = 1; i <= 10; ++i) {
    printf("|%2d| ", i);
    for (j = 0; j < wlength[i]; ++j)
      putchar('*');

    putchar('\n');
  }

  return 0;
}
