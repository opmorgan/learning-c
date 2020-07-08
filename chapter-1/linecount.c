#include <stdio.h>

/* count lines in input */
main()
{
  int c, nl, ns, nt;

  nl = 0;
  ns = 0;
  nt = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++nl;
    if (c == ' ')
      ++ns;
    if (c == '\t')
      ++nt;
  }
  printf("%d lines, %d spaces, and %d tabs.\n", nl, ns, nt);
}
