#include <stdio.h>

/*
 * simple programe to convers Fahrenheit to Celsius using a for loop.
 * reverse the for loop to go from high to low.
 */

int main()
{

  // symbolic constants - written in uppercase and can be any sequence of characters. No semicolon at the end of the define
  #define LOWER 0
  #define UPPER 300
  #define STEP 20
  
  int fahr;

  printf("Fahrenheit\tCelsius\n");

  for (fahr = UPPER; fahr >= LOWER; fahr = fahr-STEP)
    printf("%3d\t\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
