#include <stdio.h>

#define MAXLINE 1000 // maximum input line size

int getinputline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main(void) {

  int len;               // current line length
  int max;               // maximum length seen so far
  char line[MAXLINE];    // current input line
  char longest[MAXLINE]; // longest line so far

  max = 0;
  while ((len = getinputline(line, MAXLINE)) > 0)
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  if (max > 0) {
    printf("The length of the longest line is: %d\n", max);
    printf("Longest line: %s\n", longest);
  }
  return 0;
}

/* getinputline: read a line into s, return length */
int getinputline(char s[], int lim) {
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0'; // in C, we terminate an array of characters with the null
               // character to make the end
  return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
