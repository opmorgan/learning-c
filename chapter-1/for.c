#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20


/* print Fahr-Celsius Table */
main()
{
  float fahr;
  float celsius;

  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
    celsius = ((5.0/9.0)*(fahr-32));
    printf("%3.0f %6.1f\n", fahr, celsius);
  }
}

