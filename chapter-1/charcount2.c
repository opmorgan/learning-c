#include <stdio.h>

/* count characters in input v2 */

main()
{
  int c, nc;

  for (nc = 0; (c = getchar()) != EOF; ++nc) {
    if (c == '\n')
      printf("%d\n", nc)
    ;
  }
}
