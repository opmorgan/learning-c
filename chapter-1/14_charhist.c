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
  /* int greatest_count = find_max(freqs); */
  /* int find_max(int array) { */
  /*   int greatest_count = 0; */
  /*   for (int i = 0; i <= n_chars-1; ++i) { */
  /*     if (freqs[i] > greatest_count) { */
  /*       greatest_count = freqs[i]; */
  /*     } */
  /*   } */
  /* } */
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
  printf("Greatest count: %d. Length: %d.\n", greatest_count, greatest_len);


  /* scale histogram, if needed */
  /* freqs_scaled = scale_histdata(freqs, int MAXPIPS); */
  int max_pips = MAX_PIPS;
  int scale_factor = greatest_count / max_pips;
  printf("Scale factor: %d ( X %d = %d\n", scale_factor, max_pips, greatest_count);
  int freqs_scaled[MAX_CHARS] = {0};
  for (int i = 0; i <= n_chars-1; ++i) {
    printf("in for loop. i = %d; letter = %c; greatest_count = %d; max_pips = %d; (greatest_count > max_pips) = %d; freqs[i] = %d; ", i, chars[i], greatest_count, max_pips, (greatest_count > max_pips), freqs[i]); 
    if (greatest_count > max_pips) {
      freqs_scaled[i] = freqs[i] / scale_factor;
    } else {
      freqs_scaled[i] = freqs[i];
    }
    printf("freqs_scaled[i] = %d.\n", freqs_scaled[i]);
  }

  for (int i = 0; i <= n_chars-1; ++i) {
    printf("%c: %*d |", chars[i], 5, freqs[i]);
    for (int j = 0; j <= freqs_scaled[i] - 1; ++j) {
      if (j < freqs_scaled[i] - 1) {
        printf("%s", "-");
      } else 
        printf("%c", chars[i]);
    }
    printf("\n");
  }
}
