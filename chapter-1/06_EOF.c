/* Test whether getchar() is equal to EOF. */

#include <stdio.h>

int main(void)
{
  printf("Input any character or press ctrl-d:\n");
  printf("\"getchar != EOF\" evaluates to: %d\n", getchar() != EOF);
  printf("\"getchar == EOF\" evaluates to: %d\n", getchar() == EOF);
}

