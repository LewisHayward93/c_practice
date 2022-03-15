/*
** Exercise 2-2. Write a loop equivalent to the for loop below without using &&
*or ||
** for (i = 0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
** s[i] = c;
*/
#include <stdio.h>

#define MAXLINE 1000

int main() {
  char s[MAXLINE];
  int c, i;
  int loop = 1; // to be used as bool check in while loop

  i = 0;

  while (loop) {
    c = getchar();

    if (c == '\n')
      loop = 0;

    else if (c == EOF)
      loop = 0;

    else if (i >= (MAXLINE - 1))
      loop = 0;

    s[i] = c;
    ++i;
  }

  s[i] = '\0';

  printf("%s", s);

  return 0;
}
