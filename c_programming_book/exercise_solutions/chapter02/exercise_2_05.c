/* Exercise 2-5. Write the function any(s1,s2), which returns the first location
 * in a string s1 where any character from the string s2 occurs, or -1 if s1
 * contains no characters from s2. (The standard library function strpbrk does
 * the same job but returns a pointer to the location.)
 */

#include <stdio.h>

#define MAXLINE 20

int i;

int any(char s1[], char s2[]);

int main(void) {

  char s1[MAXLINE] = "xxxyyyaabbc";
  char s2[MAXLINE] = "zzz";

  /* if statement to check if common character present;
   * return fail statement and -1 if none present, else show idx and letter
   */

  if (any(s1, s2) == -1)
    printf("No common characters present, return value of %d\n", any(s1, s2));
  else
    printf("The first common character is '%c' at location %d (not idx "
           "position but letter number)\n",
           s1[any(s1, s2)], any(s1, s2));

  return 0;
}

/* any function to take in two strings of length set to MAXLINE
 * set the default position equal to -1 and change to idx if present
 */

int any(char s1[], char s2[]) {

  extern int i;
  int j;

  for (i = 0; s1[i] != '\0'; i++) {
    for (j = 0; s2[j] != '\0'; j++) {
      if (s1[i] == s2[j])
        return i + 1;
    }
  }

  return -1;
}
