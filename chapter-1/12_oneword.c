/* A program that prints its input one word per line. */

#include <stdio.h>

int main(void)
{
  int c;
  int c_prev = 0;

  printf("Enter some text to display one word per line:\n");
  while ((c = getchar()) != EOF) {
    int cond1 = (c == ' ' || c == '\t');
    int cond2 = (c_prev != ' ' && c_prev != '\t'); 
    if (cond1 && cond2)
      printf("\n");
    else putchar(c);
    c_prev = c;
  }
}

