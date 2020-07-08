#include <stdio.h>

/* count characters in input v1 */
main()
{
  long nc;
  int c;

  nc = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n')
      printf("%ld\n", nc);
    ++nc;
  }
}
