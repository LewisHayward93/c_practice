/* Exercise 2-3. Write a function htoi(s), which converts a string of
 * hexadecimal digits (including an optional 0x or 0X) into its equivalent
 * integer value. The allowable digits are 0 through 9, a through f, and A
 * through F.
 */
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

#define MAXHEX 7

char hex_input[MAXHEX];

int htoi_power(char s[]);
int htoi_algebra(char s[]);
void get_hex(void);

int main(void) {

  // Example conversion
  printf("Example: Hexstring = 0xFA9C, Decimal = %d\n\n",
         htoi_algebra("0xFA9c"));

  printf("\nInsert Hex: \n");

  get_hex();                                 // copies user input into hex_input
  printf("Original Hex: %s\n\n", hex_input); // prints original hex string
  printf("Using power function, integer: %d\n", htoi_power(hex_input));
  printf("Using an algebraic function: Integer: %d\n", htoi_algebra(hex_input));

  return 0;
}

void get_hex(void) {
  int c, i;
  extern char hex_input[];

  for (i = 0; i < MAXHEX - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    hex_input[i] = c;
  if (c == '\n') {
    hex_input[i] = '\n';
    i++;
  }
  hex_input[i] = '\0';
}

int htoi_power(char s[]) {

  int base, power, i, c, n;

  base = 16;
  power = n = 0;

  i = strlen(s);
  while (i >= 0) {
    --i;
    c = tolower(s[i]);
    if (c == 'x' && tolower(s[i - 1]) == 'x')
      ;
    if (c >= '0' && c <= '9')
      n = (c - '0') * pow(base, power) + n;
    if (c >= 'a' && c <= 'f')
      n = (c - 'a' + 10) * pow(base, power) + n;
    ++power;
  }
  return n;
}

int htoi_algebra(char s[]) {

  int i, c, n;
  n = 0;

  for (i = 0; s[i] != '\0'; i++) {
    c = tolower(s[i]);
    if (c == '0' && tolower(s[i + 1]) == 'x')
      i++;
    else if (c >= '0' && c <= '9')
      n = 16 * n + (c - '0');
    else if (c >= 'a' && c <= 'f')
      n = 16 * n + (c - 'a' + 10);
  }
  return n;
}

/* Two versions for a hexadecimal string to integer function have been created;
** One using power wiht base 16 and reversing string;
** The other using an algebraic method summing total
*/
