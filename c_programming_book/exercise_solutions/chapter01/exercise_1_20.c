#include <stdio.h>

/*
** program to take input file and convert tabs to 8 spaces;
** create output file and save
*/

#define TAB_LENGTH 8

int main(void) {

  int c;
  unsigned int nr_of_spaces;

  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      nr_of_spaces = TAB_LENGTH;
      while (nr_of_spaces) {
        putchar(' ');
        --nr_of_spaces;
      }
    } else {
      putchar(c);
    }
  }
  return 0;
}
