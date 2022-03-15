#include <stdio.h>

#define MAXLINE 1000

/*
** program to reverse any given char input;
** single reverse function
*/

void reverse(char from[], char to[], int length);
int getinput(char s[], int limit);

int main(void)
{
  char current[MAXLINE];
  char reversed[MAXLINE];

  int c, len;

  while ((len = getinput(current, MAXLINE)) > 0)
  {
    reverse(current, reversed, len);
    printf("\nOriginal line:\n%sReversed line:%s\n", current, reversed);
  }

  return 0;
}

int getinput(char s[], int limit)
{

  int i, c;

  for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
  if (c == '\n')
  {
    s[i] = c;
    ++i;
  }
  s[i] = '\0'; // in C, we terminate an array of characters with the null
               // character to make the end
  return i;
}

void reverse(char from[], char to[], int length)
{

  int i, j;
  j = 0;
  i = length - 1;
  while ((to[i] = from[j]) != '\0')
  {
    ++j;
    --i;
  }
  to[length] = '\0';
}
