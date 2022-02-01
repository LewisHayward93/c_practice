#include <stdio.h>

int main(void)
{
  // the expression will be 1 when getchar() != EOF and 0 otherwise
  printf("value of expression: %d\n",getchar()!=EOF);
  return 0;
}
