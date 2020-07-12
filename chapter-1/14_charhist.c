/* Exercise 1-14. Write a program to print a histogram of the frequencies of different characters. */

#include <stdio.h>

/* the maximum number of different chars the program will be able to count */
#define MAX_CHARS 255 
/* the maximum number of pips to display in the histogram */
#define MAX_PIPS 50

/* todo: try making a function to generate the length needed for an array to hold the characters defined in a macro */

int main(void) {
  /* create array with characters to count */
  int chars[26];
  int first_letter = 'a';
  for (int i = 0; i <= 25; ++i) {
    chars[i] = first_letter +i;
  }
  int n_chars = (sizeof(chars) / sizeof(chars[0]));

  /* create array to hold counts of each character */
  int freqs[MAX_CHARS] = {0};

  int c;
  while((c = getchar()) != EOF) {
    for (int i = 0; i <= n_chars; ++i) {
      /* count occurences (-20 for uppercase) */
      if ( (c == chars[i]) | (c == chars[i] - 20) )
        ++freqs[i];
    }
  }

  /* display histogram data */

  /* find the greatest count in the array */
  int greatest_count = 0;
  for (int i = 0; i <= n_chars-1; ++i) {
    if (freqs[i] > greatest_count) {
      greatest_count = freqs[i];
    }
  }
  /* find the length of its decimal representation */
  int n = greatest_count; int greatest_len = 0;
  while (n != 0) {
    n = n/10;
    ++greatest_len;
  }
  printf("Greatest count: %d. Length: %d\n.", greatest_count, greatest_len);


  /* scale histogram, if needed */
  int max_pips = MAX_PIPS;
  int scale_factor = max_pips / greatest_count;
  printf("Scale factor: %d ( X %d = %d", scale_factor, MAX_PIPS, greatest_count);
  int freqs_scaled[MAX_CHARS] = {0};
  if (greatest_count < max_pips) {
    for (int i = 0; i <= n_chars-1; ++i) {
      freqs_scaled[i] = freqs[i] / scale_factor;
    }
  }


  for (int i = 0; i <= n_chars-1; ++i) {
    printf("%c: %*d |", chars[i], 5, freqs[i]);
    printf("\n");
  }
}
