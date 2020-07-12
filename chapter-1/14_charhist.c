/* Exercise 1-14. Write a program to print a histogram of the frequencies of different characters. */

#include <stdio.h>

#define ARRAY_SIZE(x) (sizeof((x)) / sizeof((x)[0]))

/* the maximum number of different chars the program will be able to count */
#define MAX_CHARS 255 
/* the maximum number of pips to display in the histogram */
#define MAX_PIPS 50

int find_max(int * array);
int find_ndigits(int num);

int main(void) {
  /* create array with characters to count */
  int chars[26];
  int first_letter = 'a';
  for (int i = 0; i <= 25; ++i) {
    chars[i] = first_letter +i;
  }
  int n_chars = (sizeof(chars) / sizeof(chars[0]));

  /* create array to hold counts of each character */
  int counts[MAX_CHARS] = {0};

  /* populate array with counts of each character */
  /* counts = get_charcounts(chars) */
  int c;
  while((c = getchar()) != EOF) {
    for (int i = 0; i <= n_chars; ++i) {
      /* count occurences (-20 for uppercase) */
      if ( (c == chars[i]) | (c == chars[i] - 20) )
        ++counts[i];
    }
  }

  /* prepare data for histogram */

  /* find the greatest count in the array */
  int greatest_count = find_max(counts);

  /* find the length of its decimal representation */
  int greatest_len = find_ndigits(greatest_count);

  /* scale histogram, if needed */
  int max_pips = MAX_PIPS;
  int scale_factor = greatest_count / max_pips;
  int counts_scaled[MAX_CHARS] = {0};
  for (int i = 0; i <= n_chars-1; ++i) {
    if (greatest_count > max_pips) {
      counts_scaled[i] = counts[i] / scale_factor;
    } else {
      counts_scaled[i] = counts[i];
    }
  }

  /* display histogram  */
  for (int i = 0; i <= n_chars-1; ++i) {
    printf("%c: %*d |", chars[i], 5, counts[i]);
    for (int j = 0; j <= counts_scaled[i] - 1; ++j) {
      if (j < counts_scaled[i] - 1) {
        printf("%s", "-");
      } else 
        printf("%c", chars[i]);
    }
    printf("\n");
  }
}

int find_max(int * array) {
  int array_len = ARRAY_SIZE(array);
  int max = 0;
  for (int i = 0; i <= array_len-1; ++i) {
    if (array[i] > max) {
      max = array[i];
    }
  }
  return max;
}

int find_ndigits(int num) {
  int ndigits= 0; int n = num;
  while (n != 0) {
    n = n/10;
    ++ndigits;
  }
  return n;
}

