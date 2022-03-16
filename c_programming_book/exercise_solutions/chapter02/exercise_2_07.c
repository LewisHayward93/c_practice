/* Exercise 2-7. Write a function invert(x,p,n) that returns x with the n bits
 * that begin at position p inverted (i.e., 1 changed into 0 and vice versa),
 * leaving the others unchanged.
 */

#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

int main(void) {
  unsigned x = 116;
  int p = 4;
  int n = 3;

  printf("%d", invert(x, p, n));

  return 0;
}

unsigned invert(unsigned x, int p, int n) {

  unsigned mask1 = ~(~(~0 << n) << (p + 1 - n));
  unsigned mask2 = ~(~0 << n) << (p + 1 - n);

  return (x & mask1) | (~(x & mask2) & mask2);
}

/*
** Function above has been refactored as previously had additional steps
** --- Example ---
** return x so that n bits at position 4 are inverted
** x = 116 p = 4 n = 3
** 116 -> 0111 0100
** n bits at position -> 0001 1100 -> those that are 1's to be inverted in x
** expected outcome:
** 0110 1000 = 104 -> bits 4,3 and 2 are inverted
** Create mask to select all but bits 4,3 and 2:
** 1110 0011 -> applied to x -> 0110 0000
** Create mask to select only bits 4,3 and 2:
** 0001 1100 -> applied to x -> 0001 0100
** Inverse the applied mask with &:
** 1110 1011 -> applied to mask2 -> 0000 1000
** Use bitwise | to apply the inversion to mask with all but bits 4,3 and 2:
** 0110 1000 -> 104
*/
