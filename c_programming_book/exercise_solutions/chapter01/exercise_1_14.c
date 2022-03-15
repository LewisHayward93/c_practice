#include <stdio.h>
/*
** program to print the frequency of letters and numbers;
** taken from input stream
*/

#define ALPHA_NR 26 // number of letters in alphabet
#define NUMS_NR 10  // number 0-9

int main(void) {

  int i, j, c; // i and j for the loop and c for getchar()

  // int array of length 36 for each char a-z0-9
  int char_freq[ALPHA_NR + NUMS_NR];

  for (i = 0; i < (ALPHA_NR + NUMS_NR); ++i)
    char_freq[i] = 0; // fill the array with 0's

  while ((c = getchar()) != EOF) {
    if (c >= 'a' && c <= 'z')          // check c for letter
      ++char_freq[c - 'a'];            // add to array
    if (c >= '0' && c <= '9')          // check c for nums
      ++char_freq[c - '0' + ALPHA_NR]; // add to array at indx after 26
  }

  for (i = 0; i < ALPHA_NR + NUMS_NR; ++i) {
    if (i < ALPHA_NR)         // if idx first 25 positions for letters
      printf("%c:", 'a' + i); // print letter
    if (i > ALPHA_NR)         // if idx one of the num positions
      // print num (minus 26 to return to num)
      printf("%c:", '0' + i - ALPHA_NR);
    for (j = 0; j < char_freq[i]; ++j)
      printf("#");
    putchar('\n');
  }
}
