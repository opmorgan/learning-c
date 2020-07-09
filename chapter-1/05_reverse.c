/* Print a Fahrenheit-Celsius conversion table. */

#include <stdio.h>

#define LOWER 0.0
#define UPPER 300.0
#define STEP 20.0

int main(void)
{
  float fahr, celsius;

  fahr = UPPER;

  /* print header */
  printf("%s\t%s\n", "fahrenheit", "celsius");

  /* print fahrenheit-celsius conversion table */
  while (fahr >= LOWER) {
    celsius = (5.0/9.0) * (fahr-32.0); 
    printf("%10.0f\t%7.1f\n", fahr, celsius);
    fahr = fahr - STEP;
  }
}
