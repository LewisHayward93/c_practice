#include <stdio.h>

int main(void) {

  int c, nl;

  nl = 0;

  // while loop to check that the next character is not EOF
  while ((c = getchar()) != EOF)
    // check to see if the input is next line escape character
    if (c == '\n')
      ++nl;
  printf("%d\n", nl);

  return 0;
}
