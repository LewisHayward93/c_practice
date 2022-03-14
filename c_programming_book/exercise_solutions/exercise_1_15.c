#include <stdio.h>

#define STEP 20

/*
** conversion program from Fahrenheit to Celsius;
** using a function to make the conversion
*/

float converttemp(int);

int main(void) {

  int fahr;

  printf("Fahr\tCels\n");

  for (fahr = 0; fahr <= 300; fahr = fahr + STEP)
    printf("%3d %9.1f\n", fahr, converttemp(fahr));

  return 0;
}

/* converttemp: converts Fahrenheit (integer) into Celsius (float) */
float converttemp(int fahr) {
  float cels;

  cels = (5.0 / 9.0) * (fahr - 32);

  return cels;
}
