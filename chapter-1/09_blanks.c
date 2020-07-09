/* A program that replaces consecutive blanks in input with a single blank. */

#include <stdio.h>

int main(void)
{
  int c;
  int c_prev = 0;

  printf("Type some characters; press ctrl-D when done.\n");
  while ((c = getchar()) != EOF) {
    if (c != ' ' || c_prev != ' ')
      putchar(c);
    c_prev = c;
  }
}

