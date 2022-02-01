#include <stdio.h>

/*
 * a simple programe converting Fahrenheit to Celsius starting from 0-300 in 20 degree increments
 */

int main()
{
  float fahr, cels;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  
  printf("Fahrenheit\tCelsius\n");

  while (fahr <= upper) {
    cels = (5.0 / 9.0) * (fahr - 32);
    // %d refers to an integer argument - a width can be added by including a number before the 'd'
    printf("%3.0f\t\t%6.1f\n", fahr, cels); // %f used for float - here we include width and then number of decimal places after the '.' 
    fahr += step;
  }
}
