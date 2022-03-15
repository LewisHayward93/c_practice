/*
**Exercise 2-4. Write an alternative version of squeeze(s1,s2) that deletes each
*character in s1 *that matches any character in the string s2.
*/
#include <stdio.h>

void squeeze_single(char s[], int c);
void squeeze_string(char s[], char t[]);

int main(void) {
  char s[] = "hello";
  int c = 'l';
  printf("Orginial: %s\n", s); // prints hello as original string
  squeeze_single(s, c);        // removes all 'l' from string
  // prints letter 'l' and new 'heo'
  printf("Squeezed to remove %c: %s\n", c, s);

  char o[] = "hello";
  char t[] = "eo";
  squeeze_string(o, t);
  printf("%s\n",o);
}

// original squeeze function from K&R which removes letter from string
void squeeze_single(char s[], int c) {
  int i, j;
  for (i = j = 0; s[i] != '\0'; i++) { // loop whilst not at end of string
    if (s[i] != c)                     // if not the letter
      s[j++] = s[i]; // set letter to same position then increment j
  }
  s[j] = '\0';
}

void squeeze_string(char s[], char t[]) {
  int i, j, k;
  for (k = 0; t[k] != '\0'; ++k)
  {
    for (i = j = 0; s[i] != '\0'; ++i)
    {
      if (s[i] != t[k])
      {
        s[j++] = s[i];
      }
    }

    s[j] = '\0';
  }
}

