#include <stdio.h>

#define MAXLINE 1000
#define PRINTLINE 81

/*
** program to remove trailing blanks and tabs from each line of input;
** also delete entirely blank lines
*/

int getinputline(char s[], int lim);
void copy(char to[], char from[]);

int main(void) {
  int len;
  char line[MAXLINE];

  while ((len = getinputline(line, MAXLINE)) > 0) {
    if (len > PRINTLINE) {
      printf("Contents of line with length greater than %d: %s", PRINTLINE - 1,
             line);
    }
  }

  return 0;
}

int getinputline(char s[], int lim) {

  int i, c;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = '\n';
    ++i;
  }
  s[i] = '\0';
  return i;
}
