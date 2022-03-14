#include <stdio.h>
/*
** simple program to read a char;
** while char is not EOF indicator, output char just read
*/

int main(void) {

  int c;

  // variable c holds the char being read from text stream
  // c = getchar();

  while ((c = getchar()) != EOF) {
    // print c to the console
    putchar(c); // prints the integer variable c as a character
    // c = getchar(); // no need to keep as called in the while loop argument
  }
  return 0;
}
