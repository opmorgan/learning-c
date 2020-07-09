/* Print a Celsius-Fahrenheit conversion table.  */

#include <stdio.h>

#define LOWER 0.0
#define UPPER 300.0
#define STEP 20.0

int main(void)
{
  float fahr, celsius;
  celsius = LOWER;

  /* print header */
  printf("%s\t%s\n", "celsius", "fahrenheit");

  /* print celsius-fahrenheit conversion table */
  while (celsius <= UPPER) {
    fahr = (celsius / (5.0/9.0)) + 32.0;
    printf("%7.0f\t%10.1f\n", celsius, fahr);
    celsius = celsius + STEP;
  }
}

