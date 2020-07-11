/* Exercise 1-14. Write a program to print a histogram of the frequencies of different characters. */

#include <stdio.h>

int main(void) {
  /* create array with characters to count */
  const char * chars[] = {
    "a", "b", "c",
  };

  int n_chars = (sizeof(chars) / sizeof(chars[0]));
  printf("chars[0]: %s", chars[0]);

  /* create array to hold counts of each character */
  /* HOW TO INITIALIZE THIS ARRAY BASED ON THE LENGTH OF THE CONSTANT ARRAY CHARS? */
  int freq[n_chars] = {0};
  printf("array contents:\n");

  /* initialize variables to represent and count chars */
  int c, nc = 0;

  for (int i = 0; i <= n_chars-1; ++i) 
    printf("i: %char, chars[i] = %s, freq[i] = %d\n", i, chars[i], freq[i]);

  while((c = getchar()) != EOF) {
    ++nc;
  }

  printf("Number of characters: %d\n", nc);
}
