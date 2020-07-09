/* A word count program with a prompt suggesting ways to test it. */

#include <stdio.h>

#define IN  1 /* inside a word */
#define OUT 0 /* outside a word */

/* count lines, words, and characters in input  */
int main(void)
{
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;
  printf("Test this word count program by entering lots of spaces, new lines, and escape sequences. Try entering no characters, too.\n");
  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  printf("%d line(s), %d word(s), %d character(s)\n", nl, nw, nc);
}



