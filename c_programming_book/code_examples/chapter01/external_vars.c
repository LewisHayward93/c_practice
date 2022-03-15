#include <stdio.h>

/*
** use external variables to re-write the longest line program
*/

#define MAXLINE 1000

int max;               // maximum length seen so far
char line[MAXLINE];    // current line
char longest[MAXLINE]; // maximum line seen so far

int getinputline(void);
void copy(void);

int main(void) {
  int len;
  extern int max;
  extern char longest[];

  max = 0;
  while ((len = getinputline()) > 0) {
    if (len > max) {
      max = len;
      copy();
    }
  }
  if (max > 0)
    printf("%s", longest);

  return 0;
}

int getinputline(void) {
  int c, i;
  extern char line[];

  for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    line[i] = c;
  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}

void copy(void) {
  int i;
  extern char line[], longest[];
  i = 0;
  while ((longest[i] = line[i]) != '\0')
    ++i;
}
