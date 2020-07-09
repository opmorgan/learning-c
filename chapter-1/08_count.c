/* A program that counts the number of lines in input. */

#include <stdio.h>

int main(void)
{
  int c, nl, ns, nt;
  nl = ns = nt = 0;

  printf("Enter some text, then press ctrl-d to view line/space/tab counts.\n");
  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++nl;
    if (c == ' ')
      ++ns;
    if (c == '\t')
      ++nt;
  }
  printf("%d line(s), %d space(s), and %d tab(s).\n", nl, ns, nt);
}
