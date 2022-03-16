#include <stdio.h>

unsigned int getbits(unsigned x, int p, int n);

int main(void) {

  unsigned int i = 75;
  printf("%d\n", getbits(i, 4, 3));

  return 0;
}

/* function getbits returns n bits from position p
 * right adjusted to the lowest order bits
 * example getbits(75,4,3) returns bits 4,3 and 2 -> 010
 * right adjusted to lowest order 0000 0010 (2)
 */
unsigned int getbits(unsigned x, int p, int n) {
  /* return (x >> (p + 1 - n)) & ~(~0 << n); */
  return (x >> (p + 1 - n));
}

/* (x >> (p+1-n)) shifts the bits in x to the right
 * 0100 1011 -> 0000 1001
 * ~0 creates 1111 1111 -> applying << n shifts to left 1111 0000
 * applying ~ re-complements to 0000 1111
 * we have created a mask of 4 bits starting from lowest order bit
 * applying the mask to 0100 1011 (75) with '&'
 * 0100 1001
 * 0000 1111 (mask)
 * 0000 1001 (9)
 */
