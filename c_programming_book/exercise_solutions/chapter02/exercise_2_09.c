/* Exercise 2-9. In a two's complement number system, x &= (x-1) deletes the
** rightmost 1-bit in x. Explain why. Use this observation to write a faster
** version of bitcount.
*/

/* --- bitcount:  count 1 bits in x ---

int bitcount(unsigned x) {
  int b;
  for (b = 0; x != 0; x >>= 1)
    if (x & 01)
      b++;
  return b;
}
*/

#include <stdio.h>

int bitcount_alt(unsigned x);
int bitcount(unsigned x);

int main(void) {

  unsigned x = 11;
  printf("Integer: %u\nBits: %u\n", x, bitcount_alt(x));
  printf("Integer: %u\nBits: %u\n", x, bitcount(x));

  return 0;
}

/* Alternative implementation:
 * x &= (x-1) -> x = x & (x-1)
 * causes the most rightmost 1-bit to be deleted
 * eventually removing all 1-bits result in x = 0
 */

int bitcount_alt(unsigned x) {
  int cnt;
  for (cnt = 0; x != 0; x &= (x - 1))
    cnt++;

  return cnt;
}
int bitcount(unsigned x) {
  int b;
  for (b = 0; x != 0; x >>= 1)
    if (x & 01)
      b++;
  return b;
}
