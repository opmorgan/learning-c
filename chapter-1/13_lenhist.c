/* Print a histogram of the lengths of words in input. */

#include <stdio.h>

#define MAXLENGTH 12
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

int main(void) {
  int c, i, j;
  int nc = 0; /* to count characters */
  int state = OUT; 
  int cond = OUT;

  /* create array to store histogram data */
  int wlens[MAXLENGTH];
  for (i = 0; i <= MAXLENGTH; ++i)
    wlens[i] = 0;

  printf("Enter some text:\n");
  while ((c = getchar()) != EOF) {
    /* check whether character is inside a word */
    if  (c==' ' || c=='\n' || c=='\t') {
      cond = OUT; } else cond = IN;

    /* populate histogram data array */
    if (state == IN && cond == OUT) {
      ++wlens[nc];
      nc = 0;
      state = OUT;
    } else if (state == OUT && cond == IN) {
      ++nc;
      state = IN;
    } else if (state == IN && cond == IN) {
      ++nc;
    }
  }
  
  /* display histogram data */
  printf("word lengths: \n");
  /* find number of digits of largest count */
  for (i = 0; i <= MAXLENGTH; ++i) {
    printf("%2d: %4d |", i , wlens[i]);
    for (j = 1; j <= wlens[i]; ++j) {
      printf("%s", "\u25A0"); 
    }
    printf("\n");
  }

}

