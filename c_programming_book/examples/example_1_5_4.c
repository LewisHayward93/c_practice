#include <stdio.h>

#define IN 1
#define OUT 0

/*
** simple program to count the number of newlines, words and characters from
*input
*/

int main(void) {

  int c, nl, nw, nc, state;

  state = OUT;
  // set all variables equal to 0
  nl = nw = nc = 0;

  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == '\n' || c == '\t' || c == ' ') {
      state = OUT;
    } else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }

  printf("newlines: %d\nwords: %d\ncharacters: %d\n", nl, nw, nc);

  return 0;
}
