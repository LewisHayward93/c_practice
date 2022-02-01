#include <stdio.h>

int main(void) {
  int c;

  // variable c holds the char being read from text stream
  c = getchar();

  while (c != EOF) {
    // print c to the console
    putchar(c);
    c = getchar();
  }
  return 0;
}
