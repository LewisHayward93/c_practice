#include <stdio.h>

int atoi(char s[]);

int main(void) {

  char s1[4] = "100"; // string of digits
  char s2[4] = "200"; // string of digits

  printf("%d", atoi(s1) + atoi(s2));
}

/* atoi:  convert s to integer */
int atoi(char s[]) {
  int i, n;
  n = 0;
  for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
    // s[i] - '0' gives the numerical value
    n = 10 * n + (s[i] - '0'); // converts string of digits to int
  return n;
}
