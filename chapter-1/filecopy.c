#include <stdio.h>

main()
{
  printf("EOF: %d\n", EOF);

  int c;

  c = getchar();
  while ((c = getchar()) != EOF) {
    putchar(c);
    printf(": %3d\n", c);
    /* printf("%d\n", ((c = getchar()) != EOF)); */
  }

}
