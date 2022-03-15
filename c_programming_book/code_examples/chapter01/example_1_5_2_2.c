#include <stdio.h>

/*
** Simple program to count the number of characters entered to the console;
** second version using for loop
*/

int main() {

  float nc;

  for (nc = 0; getchar() != EOF; ++nc)
    ; // null statement to satisfy the body of the for loop is empty
  printf("%.0f\n", nc);

  return 0;
}
