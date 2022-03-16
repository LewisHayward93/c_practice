/*
** Exercise 2-6. Write a function setbits(x,p,n,y) that returns x with the n
** bits that begin at position p set to the rightmost n bits of y, leaving the
** other bits unchanged.
*/

#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, int y);

int main(void) {

  unsigned x = 100;
  unsigned y = 5;
  printf("%d", setbits(x, 4, 3, y));

  return 0;
}

unsigned setbits(unsigned x, int p, int n, int y) {

  unsigned mask_y = ~(~0 << n);
  unsigned mask_x = ~(~(~0 << n) << (p + 1 - n));

  unsigned x_with_mask = x & mask_x;
  unsigned y_with_mask_and_shift = (y & mask_y) << (p + 1 - n);

  return (x_with_mask | y_with_mask_and_shift);
}

/*
** Explanation of the question:
** Take n bits of x that begins at position p and replace them with the
*rightmost n bits of y
** ---Example Discussion---
** x = 100, y = 5, p = 4 and n = 3
** x -> 0110 0100
** y -> 0000 0101
** Select what to remain the same in x and which bits in y to be used:
** x to keep -> 011_ __00
** y to extract -> ____ _101
** Create the masks to select bits:
** mask for x -> 1110 0011 -> remove the section to be replaced
** mask for y -> 0000 0111 -> only select the last 3 bits when mask applied
** Apply masks:
** mask on x -> 0110 0000
** mask on y -> 0000 0101 -> shift to required position for final bit comparison
*-> 0001 0100
** Apply OR (|) for the new values of x and y post mask application
** 0110 0000
** 0001 0100
** ---------
** 0111 0100 = 116
*/
