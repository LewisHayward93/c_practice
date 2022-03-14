#include <stdio.h>

/*
 * a simple programe converting Celsius to Fahrenheit starting from 0-300 in 20 degree increments
 */

int main()
{
  int fahr, cels, lower, upper, step;

  cels  = 0;
  lower = fahr;
  upper = 300;
  step = 20;

  printf("Celsius\t\tFahrenheit\n");

  while (cels <= upper) {
    fahr = (cels * 9 / 5) + 32; 
    printf("%d\t\t%d\n", cels, fahr);
    cels += step;
  }
}
